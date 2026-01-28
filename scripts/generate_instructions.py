from enum import StrEnum, Enum
import inspect
import os


def trace_source():
    caller_frame = inspect.stack()[1]
    filename = os.path.basename(caller_frame.filename)
    line = caller_frame.lineno
    return f"/* generated from {filename}: l.{line} */"


class Register(StrEnum):
    A = "a"
    X = "x"
    Y = "y"
    SP = "sp"
    PSW = "status"
    YA = "ya"


class PSW(StrEnum):
    Zero = "zero"
    Sign = "neg"
    Carry = "carry"
    Overflow = "overflow"
    HalfCarry = "half_carry"


class BitOp(Enum):
    Set = 1
    Clear = 0


class AddressingMode:
    def __init__(self):
        pass

    def render(self, mnemonic, payload):
        raise ValueError("cannot render base class")


# puts the data in data8[0]
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
        super().__init__()
        allowed_registers = [Register.A, Register.X, Register.Y]
        if register not in allowed_registers:
            raise ValueError(f"Disallowed register for Register, Immediate: {register}")
        self.register = register

    def name(self, mnemonic):
        return f"{mnemonic.lower()}_register_immediate_{self.register}"

    def declaration(self, mnemonic):
        return f"bool {self.name(mnemonic)}(struct SPC_State state[static 1], uint32_t cycle)"

    def render(self, mnemonic, payload):
        payload = ["    " + line for line in payload]
        payload = [line.rstrip() for line in payload]
        payload = "\n".join(payload)

        header = inspect.cleandoc(
            f"""
            {self.declaration(mnemonic)}
            {{
                {trace_source()}
                struct CPU_State* const cpu = &state->cpu;

                assert(cycle == 2);
                cpu->operands[0] = bus_read(state, cpu->pc++);
                cpu->data8[0] = cpu->operands[0];
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

    def name(self):
        raise NotImplementedError("can't call base Instruction.name()")

    def declaration(self):
        return f"bool {self.name()}(struct SPC_State state[static 1], uint32_t cycle)"

    def render(self):
        raise NotImplementedError("can't call base Instruction.render()")

    def print(self):
        print(self.render())


class TemplateInstruction(Instruction):
    def __init__(self, mnemonic, mode, payload):
        super().__init__(mnemonic)
        self.mode = mode
        self.payload = payload

    def name(self):
        return self.mode.name(self.mnemonic)

    def render(self):
        lines = self.mode.render(self.mnemonic, self.payload)
        return "\n".join(lines)


class HardcodedInstruction(Instruction):
    def __init__(self, mnemonic, function_name, body):
        super().__init__(mnemonic)
        self.function_name = function_name
        self.lines = body.splitlines()

    def name(self):
        return self.function_name

    def render(self):
        return "\n".join([self.declaration()] + self.lines)


class PswInstruction(Instruction):
    def __init__(self, flag, op):
        super().__init__(mnemonic)
        self.flag = flag
        self.op = op

    def name(self):
        pass

    def render(self):
        pass


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


# put the result in data8[0]
def do_add8_and_check_psw(a, b):
    return inspect.cleandoc(
        f"""
        {{
            {trace_source()}
            const uint32_t operand_a = (uint32_t)({a});
            const uint32_t operand_b = (uint32_t)({b});
            const uint32_t carry     = psw_carry(cpu);
        
            // half-carry check: sum of nibbles overflows nibble
            const uint32_t nibble_sum = (operand_a & 0xf) + (operand_b & 0xf) + carry;
            psw_write_half_carry(cpu, nibble_sum > 0xf);
        
            const uint32_t full_res = operand_a + operand_b + carry;
            psw_write_carry(cpu, full_res > 0xff);
        
            // overflow if a mathematically impossible result has happened
            // i.e. (pos + pos = neg) or (neg + neg = pos)
            const bool sign_a = operand_a & 0x80;
            const bool sign_b = operand_b & 0x80;
            const bool sign_r = full_res & 0x80;
            const bool overflow = (sign_a == sign_b) && (sign_a != sign_r);
            psw_write_overflow(cpu, overflow);
        
            psw_write_zero(cpu, (full_res & 0xff) == 0);
            psw_write_neg(cpu, full_res & 0x80);

            // cache back the 8bit result for assignment
            cpu->data8[0] = full_res & 0xff;
        }}
        """
    ).splitlines()


# put the result in data8[0]
def do_sub8_and_check_psw(a, b):
    return inspect.cleandoc(
        f"""
        {{
            {trace_source()}
            const uint32_t operand_a = (uint32_t)({a});
            const uint32_t operand_b = (uint32_t)({b});
            const uint32_t borrow    = !psw_carry(cpu);
        
            // half-borrow check: if (u4)a - (u4)b - borrow underflowed
            // i.e. (u4)a < (u4)b + borrow
            const bool half_borrow = (operand_a & 0xf) < (operand_b & 0xf) + borrow;
            psw_write_half_carry(cpu, !half_borrow);
        
            const int32_t full_res = operand_a - operand_b - borrow;
            // set borrow if underflowed, ie set carry if not underflowed
            psw_write_carry(cpu, full_res >= 0x00);
        
            // overflow if a mathematically impossible result has happened
            // i.e. (pos - neg = neg) or (neg - pos = pos)
            const bool sign_a = operand_a & 0x80;
            const bool sign_b = operand_b & 0x80;
            const bool sign_r = full_res & 0x80;
            const bool overflow = (sign_a != sign_b) && (sign_a != sign_r);
            psw_write_overflow(cpu, overflow);
        
            psw_write_zero(cpu, (full_res & 0xff) == 0);
            psw_write_neg(cpu, full_res & 0x80);

            // cache back the 8bit result for assignment
            cpu->data8[0] = full_res & 0xff;
        }}
        """
    ).splitlines()


def do_cmp_and_check_psw(a, b):
    return inspect.cleandoc(
        f"""
        {{
            {trace_source()}
            // compute (a - b), no borrow, update NZC then discard result
            const uint8_t operand_a = (uint8_t)({a});
            const uint8_t operand_b = (uint8_t)({b});
            
            // no borrow so underflow/borrow if a < b
            // so carry = a >= b
            psw_write_carry(cpu, operand_a >= operand_b);
            
            // let it underflow, it's expected and fine
            const uint8_t res = operand_a - operand_b;
            psw_write_zero(cpu, res == 0);
            psw_write_neg(cpu, res & 0x80);
        }}
        """
    ).splitlines()


def logic_op_payload(reg, op, data):
    dest = f"cpu->{reg}"

    return [trace_source(), f"{dest} {op}= {data};"] + check_zero_neg(dest)


def write_register(reg, data, is_16bit=False, updates_flags=True):
    lines = [trace_source(), f"cpu->{reg} = {data};"]
    if updates_flags:
        lines += check_zero_neg(f"cpu->{reg}", is_16bit)
    return lines


class MovRegisterRegister(Instruction):
    def __init__(self, dst, src):
        super().__init__("MOV")
        self.src = src
        self.dst = dst
        self.update_psw = dst != Register.SP

    def name(self):
        return f"mov_reg_reg_{self.dst}_{self.src}"

    def render(self):
        return (
            inspect.cleandoc(
                f"""
            {trace_source()}
            {self.declaration()}
            {{
                /* could do a dummy read but shouldn't matter */
                assert(cycle == 2);
            """
            ).splitlines()
            + write_register(
                self.dst,
                f"cpu->{self.src}",
                is_16bit=False,
                updates_flags=self.update_psw,
            )
            + inspect.cleandoc(
                f"""
                return true;
            }}
            """
            ).splitlines()
        )


instructions = dict()


def add_instruction(op, instruction):
    if op in instructions and instructions[op] != instruction:
        raise ValueError(f"trying to overwrite opcode {hex(op)}")
    instructions[op] = instruction


add_instruction(
    0x00,
    HardcodedInstruction(
        "NOP",
        "nop",
        inspect.cleandoc(
            f"""
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

# Register, Immediate instructions
add_instruction(
    0x08,
    TemplateInstruction(
        "OR",
        RegisterImmediate(Register.A),
        logic_op_payload("a", "|", "cpu->data8[0]"),
    ),
)
add_instruction(
    0x28,
    TemplateInstruction(
        "AND",
        RegisterImmediate(Register.A),
        logic_op_payload("a", "&", "cpu->data8[0]"),
    ),
)
add_instruction(
    0x48,
    TemplateInstruction(
        "EOR",
        RegisterImmediate(Register.A),
        logic_op_payload("a", "^", "cpu->data8[0]"),
    ),
)
add_instruction(
    0x68,
    TemplateInstruction(
        "CMP",
        RegisterImmediate(Register.A),
        do_cmp_and_check_psw("cpu->a", "cpu->data8[0]"),
    ),
)
add_instruction(
    0x88,
    TemplateInstruction(
        "ADC",
        RegisterImmediate(Register.A),
        do_add8_and_check_psw("cpu->a", "cpu->data8[0]")
        + [trace_source(), "cpu->a = cpu->data8[0];"],
    ),
)
add_instruction(
    0xA8,
    TemplateInstruction(
        "SBC",
        RegisterImmediate(Register.A),
        do_sub8_and_check_psw("cpu->a", "cpu->data8[0]")
        + [trace_source(), "cpu->a = cpu->data8[0];"],
    ),
)
add_instruction(
    0xC8,
    TemplateInstruction(
        "CMP",
        RegisterImmediate(Register.X),
        do_cmp_and_check_psw("cpu->x", "cpu->data8[0]"),
    ),
)
add_instruction(
    0xE8,
    TemplateInstruction(
        "MOV",
        RegisterImmediate(Register.A),
        write_register("a", "cpu->data8[0]", is_16bit=False, updates_flags=True),
    ),
)

add_instruction(
    0x8D,
    TemplateInstruction(
        "MOV",
        RegisterImmediate(Register.Y),
        write_register("y", "cpu->data8[0]", is_16bit=False, updates_flags=True),
    ),
)
add_instruction(
    0xAD,
    TemplateInstruction(
        "CMP",
        RegisterImmediate(Register.Y),
        do_cmp_and_check_psw("cpu->y", "cpu->data8[0]"),
    ),
)
add_instruction(
    0xCD,
    TemplateInstruction(
        "MOV",
        RegisterImmediate(Register.X),
        write_register("x", "cpu->data8[0]", is_16bit=False, updates_flags=True),
    ),
)

# add_instruction(
#     0x7D,
#     MovRegisterRegister(Register.A, Register.X),
# )
# add_instruction(
# 0xdd,
# MovRegisterRegister(Register.A, Register.Y),
# )


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


C_IMPLEM = "instructions.gen.c"
HEADER = "instructions.gen.h"
DIR = "./src/"


def make_header():
    with open(DIR + HEADER, "w") as f:
        f.write(
            inspect.cleandoc(
                f"""
            {trace_source()}
            #pragma once

            #include <stdbool.h>

            #include "state.h"
            """
            )
        )
        f.write("\n\n")

        for lsb in range(16):
            for msb in range(16):
                op = lsb + msb * 16
                if op not in instructions:
                    continue
                instr = instructions[op]
                f.write(f"/* {op:#04x} */\n")
                f.write(f"extern {instr.declaration()};\n")
            f.write("\n")  # sep. the columns


def make_implementation():
    with open(DIR + C_IMPLEM, "w") as f:
        f.write(
            inspect.cleandoc(
                f"""
            {trace_source()}

            #include "{HEADER}"

            #include <assert.h>

            #include "bus_io.h"
            #include "cpu.h"
            """
            )
        )
        f.write("\n\n")

        for lsb in range(16):
            for msb in range(16):
                op = lsb + msb * 16
                if op not in instructions:
                    continue
                instr = instructions[op]
                f.write(f"/* {op:#04x} */\n")
                f.write(f"{instr.render()}\n\n")
            f.write("\n")  # sep. the columns


def main():
    make_header()
    make_implementation()
    print(f"missing: {256 - len(instructions)}")


if __name__ == "__main__":
    main()
