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

    def prefix(self):
        return "_register_immediate_" + self.register.name

    def render(self, mnemonic, payload):
        print(
            f"bool {mnemonic}{self.prefix()}(struct SPC_State* state, uint32_t cycle)"
        )
        print("{")
        print("    struct CPU_State* cpu = &state->cpu;")
        print("    assert(cycle == 2);")
        print("    cpu->operands[0] = bus_read(state, cpu->pc++);")
        print("\n    // payload")
        for instruction in payload:
            print(f"    {instruction};")
        print()
        print("    return true;")
        print("}")


mode = RegisterImmediate(Register.X)
mode.render(
    "and",
    (
        "cpu->x = cpu->operands[0]",
        "psw_write_zero(cpu, (cpu->x == 0))",
        "psw_write_neg(cpu, (cpu->x & 0x80))",
    ),
)
