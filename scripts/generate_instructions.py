from typing import List, Dict, Optional, Callable
from dataclasses import dataclass
from enum import Enum
import inspect
import os


def trace_source():
    caller_frame = inspect.stack()[1]
    filename = os.path.basename(caller_frame.filename)
    line = caller_frame.lineno
    return f"/* generated from {filename}: l.{line} */"


class Register(Enum):
    A = 1
    X = 2
    Y = 3
    SP = 4
    PSW = 5
    YA = 6


class AddressingMode:
    def __init__(self):
        pass

    def render(self, mnemonic, payload):
        raise ValueError("cannot render base class")


# puts the data in data8
class RegisterImmediate(AddressingMode):
    """
    1 Register, Immediate -- A,#i; X,#i; Y,#i

    (ADC,AND,CMP,CMP,CMP,EOR,MOV,MOV,MOV,OR,SBC)
    (2 bytes)
    (2 cycles)
           1       PC      Op Code         1
           2       PC+1    Data            1
       * This should be accurate.
    """

    def __init__(self, register):
        allowed_registers = [Register.A, Register.X, Register.Y]
        if register not in allowed_registers:
            raise ValueError(
                f"Disallowed register for Register, Immediate: {register.name}"
            )
        self.register = register

    def declaration(self, mnemonic):
        name = f"{mnemonic.lower()}_register_immediate_{self.register.name.lower()}"
        return f"bool {name}(struct SPC_State state[static 1], uint32_t cycle)"

    def render(self, mnemonic, payload):
        payload = ["    " + line for line in payload]
        payload = "\n".join(payload)

        header = inspect.cleandoc(
            f"""
            {self.declaration(mnemonic)}
            {{
                {trace_source()}
                struct CPU_State* const cpu = &state->cpu;

                assert(cycle == 2);
                cpu->operands[0] = bus_read(state, cpu->pc++);
                cpu->data8 = cpu->operands[0];
            """
        )
        footer = inspect.cleandoc(
            f"""
                return true;
            }}
            """
        )

        return f"{header}\n\n{payload}\n{footer}".splitlines()


class Instruction:
    def __init__(self, mnemonic):
        self.mnemonic = mnemonic

    def declaration(self):
        raise NotImplementedError("can't call base Instruction.declaration()")

    def render(self):
        raise NotImplementedError("can't call base Instruction.render()")

    def print(self):
        print(self.render())


class TemplateInstruction(Instruction):
    def __init__(self, mnemonic, mode, payload):
        super().__init__(mnemonic)
        self.mode = mode
        self.payload = payload

    def declaration(self):
        return self.mode.declaration(self.mnemonic)

    def render(self):
        lines = self.mode.render(self.mnemonic, self.payload)
        return "\n".join(lines)


class HardcodedInstruction(Instruction):
    def __init__(self, mnemonic, body):
        super().__init__(mnemonic)
        self.lines = body.splitlines()

    def declaration(self):
        return self.lines[0]

    def render(self):
        return "\n".join(self.lines)


def check_zero_neg(value_expr, is_16bit=False):
    mask = "0x8000" if is_16bit else "0x80"
    return inspect.cleandoc(
        f"""
        {{
            {trace_source()}
            const uint16_t v = {value_expr};
            psw_write_zero(cpu, v == 0);
            psw_write_neg(cpu, v & {mask});
        }}
        """
    ).splitlines()


def check_addition_psw(a, b, res, is_16bit=False):
    mask_sign = "0x8000" if is_16bit else "0x80"
    mask_h = "0x0fff" if is_16bit else "0x0f"
    limit = "0xffff" if is_16bit else "0xff"

    return (
        inspect.cleandoc(
            f"""
        {{
            const uint32_t val_a = (uint32_t)({a});
            const uint32_t val_b = (uint32_t)({b});
            const uint32_t val_r = (uint32_t)({res});
            const uint32_t c_in  = psw_carry(cpu);
        
            // half-carry check: sum of nibbles exceeds mask
            const uint32_t h_sum = (val_a & {mask_h}) + (val_b & {mask_h}) + c_in;
            psw_write_half_carry(cpu, h_sum > {mask_h});
        
            psw_write_carry(cpu, val_r > {limit});
        
            // overflow if (pos + pos = neg) or (neg + neg = pos)
            const bool v = ~((val_a) ^ (val_b)) & ((val_a) ^ (val_r)) & {mask_sign};
            psw_write_overflow(cpu, v);
        
            // Zero & Negative
            psw_write_zero(cpu, (val_r & {limit}) == 0);
            psw_write_neg(cpu, val_r & {mask_sign});
        }}
        """
        ).splitlines()
        + check_zero_neg(res, is_16bit)
    )


def logic_op_payload(reg, op, data):
    dest = f"cpu->{reg}"

    return [trace_source(), f"{dest} {op}= {data};"] + check_zero_neg(dest)


def write_register(reg, data, is_16bit=False, updates_flags=True):
    lines = [trace_source(), f"cpu->{reg} = {data};"]
    if updates_flags:
        lines += check_zero_neg(f"cpu->{reg}", is_16bit)
    return lines


instructions = dict()


def add_instruction(op, instruction):
    if op in instructions and instructions[op] != instruction:
        raise ValueError(f"trying to overwrite opcode {hex(op)}")
    instructions[op] = instruction


add_instruction(
    0x00,
    HardcodedInstruction(
        "NOP",
        inspect.cleandoc(
            f"""
            bool nop(struct SPC_State state[static 1], uint32_t cycle)
            {{
                {trace_source()}
                /* could do a dummy read but shouldn't matter */
                assert(cycle == 2);
                (void)state;
                return true;
            }}
            """
        ),
    ),
)

add_instruction(
    0x08,
    TemplateInstruction(
        "OR",
        RegisterImmediate(Register.A),
        logic_op_payload("a", "|", "cpu->data8"),
    ),
)
add_instruction(
    0x28,
    TemplateInstruction(
        "AND",
        RegisterImmediate(Register.A),
        logic_op_payload("a", "&", "cpu->data8"),
    ),
)
add_instruction(
    0x48,
    TemplateInstruction(
        "EOR",
        RegisterImmediate(Register.A),
        logic_op_payload("a", "^", "cpu->data8"),
    ),
)
add_instruction(
    0xE8,
    TemplateInstruction(
        "MOV",
        RegisterImmediate(Register.A),
        write_register("a", "cpu->data8", is_16bit=False, updates_flags=True),
    ),
)

add_instruction(
    0x8D,
    TemplateInstruction(
        "MOV",
        RegisterImmediate(Register.Y),
        write_register("y", "cpu->data8", is_16bit=False, updates_flags=True),
    ),
)
add_instruction(
    0xCD,
    TemplateInstruction(
        "MOV",
        RegisterImmediate(Register.X),
        write_register("x", "cpu->data8", is_16bit=False, updates_flags=True),
    ),
)


def check_missing_opcodes():
    missing = []
    for op in range(255):
        if op not in instructions:
            missing.append(op)
    if len(missing) == 0:
        print("all opcodes accounted for")
    else:
        for op in missing:
            print(hex(op), ", ", end="")
        print()
        print(f"{len(missing)} missing")


def main():
    # instructions[0x28].print()
    for op in instructions:
        instructions[op].print()
        print()
    print(f"missing: {256 - len(instructions)}")


if __name__ == "__main__":
    main()
