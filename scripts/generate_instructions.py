from typing import List, Dict, Optional, Callable
from dataclasses import dataclass
from enum import Enum


@dataclass
class OpcodeMetadata:
    mnemonic: str  # LDA STY etc
    cycles: int
    length: int  # number of bytes
    addressing_mode: str  # bus access pattern
    operation: str  # payload after bus access, e.g. bus write or register write


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
        lines.append("\n    // payload")
        for instruction in payload:
            lines.append(f"    {instruction};")
        lines.append("")
        lines.append("    return true;")
        lines.append("}")

        return lines


mode = RegisterImmediate(Register.A)
lines = mode.render(
    "and",
    (
        "cpu->{reg} &= cpu->operands[0]",
        "psw_write_zero(cpu, (cpu->{reg} == 0))",
        "psw_write_neg(cpu, (cpu->{reg} & 0x80))",
    ),
)
print("\n".join(lines))
