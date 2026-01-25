from typing import List, Dict, Optional, Callable
from dataclasses import dataclass
from enum import Enum


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

    def render(self, mnemonic, payload):
        lines = []
        lines.append(
            f"bool {mnemonic.lower()}_register_immediate_{self.register.name.lower()}(struct SPC_State* state, uint32_t cycle)"
        )
        lines.append("{")
        lines.append("    struct CPU_State* cpu = &state->cpu;")
        lines.append("")
        lines.append("    assert(cycle == 2);")
        lines.append("    cpu->operands[0] = bus_read(state, cpu->pc++);")
        lines.append("    cpu->data8 = cpu->operands[0];")
        lines.append("")
        lines.append("    // payload")
        for instruction in payload:
            lines.append(f"    {instruction}")
        lines.append("")
        lines.append("    return true;")
        lines.append("}")

        return lines


class Instruction:
    def __init__(self, mnemonic, mode, payload):
        self.mnemonic = mnemonic
        self.mode = mode
        self.payload = payload

    def render(self):
        return self.mode.render(self.mnemonic, self.payload)

    def print(self):
        print("\n".join(self.render()))


def check_zero_neg(value_expr, is_16bit=False):
    mask = "0x8000" if is_16bit else "0x80"
    return [
        "{",
        f"    uint16_t v = {value_expr};",
        f"    psw_write_zero(cpu, v == 0);",
        f"    psw_write_neg(cpu, v & {mask});",
        "}",
    ]


def check_half_carry_addition(a, b, is_16bit=False):
    mask = "0x0fff" if is_16bit else "0x0f"
    return (
        "{",
        f"    uint32_t val_a = ({a}) & {mask};",
        f"    uint32_t val_b = ({b}) & {mask};",
        "    uint32_t carry  = psw_carry(cpu);",
        "",
        "    uint32_t nibble_sum = val_a + val_b + carry;",
        "",
        f"    psw_write_half_carry(cpu, nibble_sum > {mask});",
        "}",
    )


def logic_op_payload(reg, op, data):
    dest = f"cpu->{reg}"

    return [f"{dest} {op}= {data};"] + check_zero_neg(dest)


def write_register(reg, data, is_16bit=False, updates_flags=True):
    lines = [f"cpu->{reg} = {data};"]
    if updates_flags:
        lines += check_zero_neg(f"cpu->{reg}", is_16bit)
    return lines


instructions = dict()


def add_instruction(op, instruction):
    if op in instructions and instructions[op] != instruction:
        raise ValueError(f"trying to overwrite opcode {hex(op)}")
    instructions[op] = instruction


add_instruction(
    0x08,
    Instruction(
        "OR",
        RegisterImmediate(Register.A),
        logic_op_payload("a", "|", "cpu->data8"),
    ),
)
add_instruction(
    0x28,
    Instruction(
        "AND",
        RegisterImmediate(Register.A),
        logic_op_payload("a", "&", "cpu->data8"),
    ),
)
add_instruction(
    0x48,
    Instruction(
        "EOR",
        RegisterImmediate(Register.A),
        logic_op_payload("a", "^", "cpu->data8"),
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
    for op in instructions:
        instructions[op].print()
        print()
    print(f"missing: {256 - len(instructions)}")


if __name__ == "__main__":
    main()
