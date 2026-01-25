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

    def render(self):
        pass


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
        payload = [line.format(reg=self.register.name.lower()) for line in payload]

        lines = []
        lines.append(
            f"bool {mnemonic}_register_immediate_{self.register.name.lower()}(struct SPC_State* state, uint32_t cycle)"
        )
        lines.append("{")
        lines.append("    struct CPU_State* cpu = &state->cpu;")
        lines.append("")
        lines.append("    assert(cycle == 2);")
        lines.append("    cpu->operands[0] = bus_read(state, cpu->pc++);")
        lines.append("")
        lines.append("    // payload")
        for instruction in payload:
            lines.append(f"    {instruction};")
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


def logic_op_payload(reg, op, data):
    return (
        f"cpu->{reg} {op}= {data}",
        f"psw_write_zero(cpu, (cpu->{reg} == 0))",
        f"psw_write_neg(cpu, (cpu->{reg} & 0x80))",
    )


instructions = dict()

instructions[0x28] = Instruction(
    "and",
    RegisterImmediate(Register.A),
    logic_op_payload("a", "&", "operands[0]"),
)
instructions[0x28].print()


def check_missing_opcodes():
    count = 0
    for op in range(255):
        if op not in instructions:
            print(f"missing opcode: 0x{hex(op)}")
            count += 1
    print(f"\ntotal missing: {count}")


# check_missing_opcodes()
