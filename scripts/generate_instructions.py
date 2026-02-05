from enum import StrEnum, Enum
import inspect
import os


def trace_source():
    caller_frame = inspect.stack()[1]
    filename = os.path.basename(caller_frame.filename)
    line = caller_frame.lineno
    return f"/* generated from {filename}: l.{line} */"


# an array of static inline C functions to prepend before the instructions
# or any global scope code snippet really
helpers = []


def register_helper(function_block):
    helpers.append(function_block)


register_helper(
    inspect.cleandoc(
        """
        #include <stdlib.h>  // for abort()

        #if defined(__GNUC__) || defined(__clang__)
            #define UNREACHABLE() do { __builtin_trap(); __builtin_unreachable(); } while(0)
        #elif defined(_MSC_VER)
            #include <intrin.h>  // for __debugbreak()
            #define UNREACHABLE() do { __debugbreak(); __assume(0); } while(0)
        #else
            #define UNREACHABLE() abort()
        #endif
        """
    )
)

register_helper(
    inspect.cleandoc(
        """
        #include "instruction.h"

        #if defined(__GNUC__) || defined(__clang__)
            #define UNREACHABLE() do { __builtin_trap(); __builtin_unreachable(); } while(0)
        #elif defined(_MSC_VER)
            #include <intrin.h>  // for __debugbreak()
            #define UNREACHABLE() do { __debugbreak(); __assume(0); } while(0)
        #else
            #define UNREACHABLE() abort()
        #endif
        """
    )
)


class InstructionStatus(StrEnum):
    Type = "enum InstructionStatus"
    Done = "INSTRUCTION_STATUS_DONE"
    Pending = "INSTRUCTION_STATUS_PENDING"
    UnexpectedCycle = "INSTRUCTION_STATUS_UNEXPECTED_CYCLE"


register_helper(
    inspect.cleandoc(
        f"""
        static inline void parse_membit(uint16_t operand, uint16_t* addr, uint8_t* bit)
        {{
            {trace_source()}
            // top 3 bits encode the bit
            // the 13 ls bits encode the address in the first 8KB of RAM
            *bit = (uint8_t)(operand >> 13);
            *addr = (operand & 0x1fff);
        }}
        """
    )
)


def idle_cycle():
    return "(void)bus_read(state, state->cpu.addr); // dummy read from the last latched address"


def dummy_read_pc():
    return "(void)bus_read(state, state->cpu.pc); // dummy read/pre-fetch"


def read_pc_to(dest):
    """Generate code to read from PC and latch it to cpu->addr. PC is incremented after."""
    return f"cpu->addr = cpu->pc++; {dest} = bus_read(state, cpu->addr);"


def read_from_addr(dest):
    """Generate code to read from cpu->addr (already latched)."""
    return f"{dest} = bus_read(state, cpu->addr);"


def write_to_addr(value):
    """Generate code to write to cpu->addr (already latched)."""
    return f"bus_write(state, cpu->addr, {value});"


instructions = dict()


def add_instruction(op, instruction):
    if op in instructions:
        raise ValueError(f"trying to overwrite opcode {hex(op)}")
    instructions[op] = instruction


def assemble_instruction(header, payload, footer, indent_depth=1):
    indent = "    " * indent_depth
    payload = [indent + line for line in payload]
    payload = [line.rstrip() for line in payload]
    payload = "\n".join(payload)
    return f"{header}\n\n{indent}/* payload */\n{payload}\n{footer}".splitlines()


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
    InterruptEnable = "interrupt_enable"


class BitOp(Enum):
    Set = 1
    Clear = 0


# performs bus IO and sets up cpu->data8[2] for the coming ALU execution (and maybe write back)
class AddressingMode:
    def __init__(self):
        pass

    def declaration(self, mnemonic):
        return f"{InstructionStatus.Type} {self.name(mnemonic)}(struct SPC_State state[static 1], uint32_t cycle)"

    def render(self, mnemonic, payload):
        raise ValueError("cannot render base class")


class Instruction:
    def __init__(self, mnemonic):
        self.mnemonic = mnemonic

    def name(self):
        raise NotImplementedError("can't call base Instruction.name()")

    def full_mnemonic(self):
        raise NotImplementedError("can't call base Instruction.full_mnemonic()")

    def declaration(self):
        return f"{InstructionStatus.Type} {self.name()}(struct SPC_State state[static 1], uint32_t cycle)"

    def render(self):
        raise NotImplementedError("can't call base Instruction.render()")

    def print(self):
        print(self.render())


class TemplateInstruction(Instruction):
    def __init__(self, mnemonic, _full_mnemonic, mode, payload):
        super().__init__(mnemonic)
        self.mode = mode
        self.payload = payload
        self._full_mnemonic = _full_mnemonic

    def full_mnemonic(self):
        return self._full_mnemonic

    def name(self):
        return self.mode.name(self.mnemonic)

    def render(self):
        lines = self.mode.render(self.mnemonic, self.payload)
        return "\n".join(lines)


class HardcodedInstruction(Instruction):
    def __init__(self, mnemonic, _full_mnemonic, function_name, body):
        super().__init__(mnemonic)
        self.function_name = function_name
        self.lines = body.splitlines()
        self._full_mnemonic = _full_mnemonic

    def full_mnemonic(self):
        return self._full_mnemonic

    def name(self):
        return self.function_name

    def render(self):
        return "\n".join([self.declaration()] + self.lines)


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


def alu_op(dest, op, data):
    return [trace_source(), f"{dest} {op}= {data};"] + check_zero_neg(dest)


def alu_and(dest, data):
    return alu_op(dest, "&", data)


def alu_xor(dest, data):
    return alu_op(dest, "^", data)


def alu_or(dest, data):
    return alu_op(dest, "|", data)


def write_register(reg, data, is_16bit=False, updates_flags=True):
    lines = [trace_source(), f"cpu->{reg} = {data};"]
    if updates_flags:
        lines += check_zero_neg(f"cpu->{reg}", is_16bit)
    return lines


# convenience register loads
# they expect the byte to be in cpu->data8[0]
load_a = lambda: write_register(
    Register.A, "cpu->data8[0]", is_16bit=False, updates_flags=True
)
load_x = lambda: write_register(
    Register.X, "cpu->data8[0]", is_16bit=False, updates_flags=True
)
load_y = lambda: write_register(
    Register.Y, "cpu->data8[0]", is_16bit=False, updates_flags=True
)

# ALU operations on registers always expect the operand to be in cpu->data8[0]
# and write back to the same register. it's the addressing mode's job to
# respect this protocol and load data in data8
do_or_a = lambda: alu_or("cpu->a", "cpu->data8[0]")
do_and_a = lambda: alu_and("cpu->a", "cpu->data8[0]")
do_xor_a = lambda: alu_xor("cpu->a", "cpu->data8[0]")
do_cmp_a = lambda: do_cmp_and_check_psw("cpu->a", "cpu->data8[0]")

do_adc_a = lambda: (
    do_add8_and_check_psw("cpu->a", "cpu->data8[0]")
    + [trace_source(), "cpu->a = cpu->data8[0];"]
)
do_sbc_a = lambda: (
    do_sub8_and_check_psw("cpu->a", "cpu->data8[0]")
    + [trace_source(), "cpu->a = cpu->data8[0];"]
)

do_cmp_x = lambda: do_cmp_and_check_psw("cpu->x", "cpu->data8[0]")
do_cmp_y = lambda: do_cmp_and_check_psw("cpu->y", "cpu->data8[0]")


# RAM operations expect the operands to be in cpu->data8[0-1] the ALU result is
# stored back in cpu->data8[0] then stored to cpu->addr
store = lambda: [trace_source(), "bus_write(state, cpu->addr, cpu->data8[0]);"]

do_or_mem = lambda: alu_or("cpu->data8[0]", "cpu->data8[1]") + store()
do_and_mem = lambda: alu_and("cpu->data8[0]", "cpu->data8[1]") + store()
do_xor_mem = lambda: alu_xor("cpu->data8[0]", "cpu->data8[1]") + store()
do_cmp_mem = lambda: do_cmp_and_check_psw("cpu->data8[0]", "cpu->data8[1]")

do_sbc8_mem = lambda: do_sub8_and_check_psw("cpu->data8[0]", "cpu->data8[1]") + store()
do_adc8_mem = lambda: do_add8_and_check_psw("cpu->data8[0]", "cpu->data8[1]") + store()


def do_asl():
    return inspect.cleandoc(
        f"""
        {{
            {trace_source()}
            // ASL - Arithmetic Shift Left
            // high bit -> Carry, 0 -> low bit
            const uint8_t value = cpu->data8[0];
            
            psw_write_carry(cpu, value & 0x80);
            
            const uint8_t result = value << 1;
            psw_write_zero(cpu, result == 0);
            psw_write_neg(cpu, result & 0x80);
            
            cpu->data8[0] = result;
        }}
        """
    ).splitlines()


def do_dec():
    return inspect.cleandoc(
        f"""
        {{
            {trace_source()}
            // DEC - Decrement
            const uint8_t result = cpu->data8[0] - 1;
            
            psw_write_zero(cpu, result == 0);
            psw_write_neg(cpu, result & 0x80);
            
            cpu->data8[0] = result;
        }}
        """
    ).splitlines()


def do_inc():
    return inspect.cleandoc(
        f"""
        {{
            {trace_source()}
            // INC - Increment
            const uint8_t result = cpu->data8[0] + 1;
            
            psw_write_zero(cpu, result == 0);
            psw_write_neg(cpu, result & 0x80);
            
            cpu->data8[0] = result;
        }}
        """
    ).splitlines()


def do_lsr():
    return inspect.cleandoc(
        f"""
        {{
            {trace_source()}
            // LSR - Logical Shift Right
            // 0 -> high bit, low bit -> Carry
            const uint8_t value = cpu->data8[0];
            
            psw_write_carry(cpu, value & 0x01);
            
            const uint8_t result = value >> 1;
            psw_write_zero(cpu, result == 0);
            psw_write_neg(cpu, result & 0x80);
            
            cpu->data8[0] = result;
        }}
        """
    ).splitlines()


def do_rol():
    return inspect.cleandoc(
        f"""
        {{
            {trace_source()}
            // ROL - Rotate Left
            // low bit = Carry, Carry = high bit
            const uint8_t value = cpu->data8[0];
            const uint8_t carry_in = psw_carry(cpu);
            
            psw_write_carry(cpu, value & 0x80);
            
            const uint8_t result = (value << 1) | carry_in;
            psw_write_zero(cpu, result == 0);
            psw_write_neg(cpu, result & 0x80);
            
            cpu->data8[0] = result;
        }}
        """
    ).splitlines()


def do_ror():
    return inspect.cleandoc(
        f"""
        {{
            {trace_source()}
            // ROR - Rotate Right
            // high bit = Carry, Carry = low bit
            const uint8_t value = cpu->data8[0];
            const uint8_t carry_in = psw_carry(cpu);
            
            psw_write_carry(cpu, value & 0x01);
            
            const uint8_t result = (value >> 1) | (carry_in << 7);
            psw_write_zero(cpu, result == 0);
            psw_write_neg(cpu, result & 0x80);
            
            cpu->data8[0] = result;
        }}
        """
    ).splitlines()


def do_set1(bit):
    return inspect.cleandoc(
        f"""
        {{
            {trace_source()}
            // SET1 - Set bit {bit}
            cpu->data8[0] |= (1 << {bit});
        }}
        """
    ).splitlines()


def do_clr1(bit):
    return inspect.cleandoc(
        f"""
        {{
            {trace_source()}
            // CLR1 - Clear bit {bit}
            cpu->data8[0] &= ~(1 << {bit});
        }}
        """
    ).splitlines()


add_instruction(
    0x00,
    HardcodedInstruction(
        mnemonic="NOP",
        _full_mnemonic="NOP",
        function_name="nop",
        body=inspect.cleandoc(
            f"""
            {{
                {trace_source()}

                if (cycle != 2) {{ return {InstructionStatus.UnexpectedCycle}; }}
            
                {dummy_read_pc()}
                return {InstructionStatus.Done};
            }}
            """
        ),
    ),
)


# puts the data in data8[0]
class RegisterImmediateMode(AddressingMode):
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
        self.cycles = 2
        allowed_registers = [Register.A, Register.X, Register.Y]
        if register not in allowed_registers:
            raise ValueError(f"Disallowed register for Register, Immediate: {register}")
        self.register = register

    def name(self, mnemonic):
        return f"{mnemonic.lower()}_register_immediate_{self.register}"

    def render(self, mnemonic, payload):
        header = inspect.cleandoc(
            f"""
            {self.declaration(mnemonic)}
            {{
                {trace_source()}
                struct CPU_State* const cpu = &state->cpu;

                if (cycle != 2) {{ return {InstructionStatus.UnexpectedCycle}; }}

                {read_pc_to("cpu->operands[0]")}
                cpu->data8[0] = cpu->operands[0];
            """
        )
        # payload goes here
        footer = inspect.cleandoc(
            f"""
                return {InstructionStatus.Done};
            }}
            """
        )

        return assemble_instruction(header, payload, footer)

    @classmethod
    def register_instructions(cls):
        add_instruction(
            0x08,
            TemplateInstruction(
                "OR",
                "OR    A, #i",
                cls(Register.A),
                do_or_a(),
            ),
        )
        add_instruction(
            0x28,
            TemplateInstruction(
                "AND",
                "AND   A, #i",
                cls(Register.A),
                do_and_a(),
            ),
        )
        add_instruction(
            0x48,
            TemplateInstruction(
                "EOR",
                "EOR   A, #i",
                cls(Register.A),
                do_xor_a(),
            ),
        )
        add_instruction(
            0x68,
            TemplateInstruction(
                "CMP",
                "CMP   A, #i",
                cls(Register.A),
                do_cmp_a(),
            ),
        )
        add_instruction(
            0x88,
            TemplateInstruction(
                "ADC",
                "ADC   A, #i",
                cls(Register.A),
                do_adc_a(),
            ),
        )
        add_instruction(
            0xA8,
            TemplateInstruction(
                "SBC",
                "SBC   A, #i",
                cls(Register.A),
                do_sbc_a(),
            ),
        )
        add_instruction(
            0xC8,
            TemplateInstruction(
                "CMP",
                "CMP   X, #i",
                cls(Register.X),
                do_cmp_x(),
            ),
        )
        add_instruction(
            0xE8,
            TemplateInstruction(
                "MOV",
                "MOV   A, #i",
                cls(Register.A),
                load_a(),
            ),
        )
        add_instruction(
            0x8D,
            TemplateInstruction(
                "MOV",
                "MOV   Y, #i",
                cls(Register.Y),
                load_y(),
            ),
        )
        add_instruction(
            0xAD,
            TemplateInstruction(
                "CMP",
                "CMP   Y, #i",
                cls(Register.Y),
                do_cmp_y(),
            ),
        )
        add_instruction(
            0xCD,
            TemplateInstruction(
                "MOV",
                "MOV   X, #i",
                cls(Register.X),
                load_x(),
            ),
        )


class MovRegisterRegister(Instruction):
    """
    2 Register, Register -- A,X; A,Y; X,A; X,Y; Y,A; Y,X; SP,X; X,SP
    (MOV,MOV,MOV,MOV,MOV,MOV)
    (1 byte)
    (2 cycles)
          1       PC      Op Code         1
          2       ??      IO              ?
      * This should be accurate.
    """

    def __init__(self, dst, src):
        super().__init__("MOV")
        self.src = src
        self.dst = dst
        self.update_psw = dst != Register.SP

    def full_mnemonic(self):
        return f"MOV   {self.dst.name}, {self.src.name}"

    def name(self):
        return f"mov_reg_reg_{self.dst}_{self.src}"

    def render(self):
        header = inspect.cleandoc(
            f"""
            {self.declaration()}
            {{
            {trace_source()}
                struct CPU_State* const cpu = &state->cpu;

                if (cycle != 2) {{ return {InstructionStatus.UnexpectedCycle}; }}

                {idle_cycle()}
            """
        )
        payload = write_register(
            self.dst,
            f"cpu->{self.src}",
            is_16bit=False,
            updates_flags=self.update_psw,
        )
        footer = inspect.cleandoc(
            f"""
                return {InstructionStatus.Done};
            }}
            """
        )

        return "\n".join(assemble_instruction(header, payload, footer))

    @classmethod
    def register_instructions(cls):
        add_instruction(
            0x7D,
            cls(Register.A, Register.X),
        )
        add_instruction(
            0xDD,
            cls(Register.A, Register.Y),
        )
        add_instruction(
            0xBD,
            cls(Register.SP, Register.X),
        )
        add_instruction(
            0x5D,
            cls(Register.X, Register.A),
        )
        add_instruction(
            0x9D,
            cls(Register.X, Register.SP),
        )
        add_instruction(
            0xFD,
            cls(Register.Y, Register.A),
        )


class RegisterDirectMode(AddressingMode):
    """
       3 Register, Direct -- A,d; X,d; Y,d
    (ADC,AND,CMP,CMP,CMP,EOR,MOV,MOV,MOV,OR,SBC)
    (2 bytes)
    (3 cycles)
          1       PC      Op Code         1
          2       PC+1    DO              1
          3       DO      Data            1
      * Verified by blargg.
    """

    def __init__(self, register):
        super().__init__()
        self.register = register
        self.cycles = 3

    def name(self, mnemonic):
        return f"{mnemonic.lower()}_register_direct_{self.register}"

    def render(self, mnemonic, payload):
        header = inspect.cleandoc(
            f"""
            {self.declaration(mnemonic)}
            {{
                {trace_source()}
                struct CPU_State* const cpu = &state->cpu;

                if (cycle < 2 || cycle > {self.cycles}) {{ return {InstructionStatus.UnexpectedCycle}; }}

                switch (cycle) {{
                    case 2:
                        {read_pc_to("cpu->operands[0]")}
                        return {InstructionStatus.Pending};
                    case 3: {{
                        cpu->addr = direct_page(cpu, cpu->operands[0]);
                        {read_from_addr("cpu->data8[0]")}
            """
        )

        footer = inspect.cleandoc(
            f"""
                        return {InstructionStatus.Done};
                    }}
                    default:
                        UNREACHABLE();
                }}
            }}
            """
        )

        return assemble_instruction(header, payload, footer, indent_depth=3)

    @classmethod
    def register_instructions(cls):
        add_instruction(
            0x04,
            TemplateInstruction(
                "OR",
                "OR    A, d",
                cls(Register.A),
                do_or_a(),
            ),
        )
        add_instruction(
            0x24,
            TemplateInstruction(
                "AND",
                "AND   A, d",
                cls(Register.A),
                do_and_a(),
            ),
        )
        add_instruction(
            0x44,
            TemplateInstruction(
                "EOR",
                "EOR   A, d",
                cls(Register.A),
                do_xor_a(),
            ),
        )
        add_instruction(
            0x64,
            TemplateInstruction(
                "CMP",
                "CMP   A, d",
                cls(Register.A),
                do_cmp_a(),
            ),
        )
        add_instruction(
            0x84,
            TemplateInstruction(
                "ADC",
                "ADC   A, d",
                cls(Register.A),
                do_adc_a(),
            ),
        )
        add_instruction(
            0xA4,
            TemplateInstruction(
                "SBC",
                "SBC   A, d",
                cls(Register.A),
                do_sbc_a(),
            ),
        )
        add_instruction(
            0x3E,
            TemplateInstruction(
                "CMP",
                "CMP   X, d",
                cls(Register.X),
                do_cmp_x(),
            ),
        )
        add_instruction(
            0xE4,
            TemplateInstruction(
                "MOV",
                "MOV   A, d",
                cls(Register.A),
                load_a(),
            ),
        )
        add_instruction(
            0xEB,
            TemplateInstruction(
                "MOV",
                "MOV   Y, d",
                cls(Register.Y),
                load_y(),
            ),
        )
        add_instruction(
            0xF8,
            TemplateInstruction(
                "MOV",
                "MOV   X, d",
                cls(Register.X),
                load_x(),
            ),
        )


class RegisterDirectIndexedMode(AddressingMode):
    """
    4 Register, Direct Indexed -- A,d+X; X,d+Y; Y,d+X
     (ADC,AND,CMP,EOR,MOV,MOV,MOV,OR,SBC)
     (2 bytes)
     (4 cycles)
           1       PC      Op Code         1
           2       PC+1    DO              1
           3       ??      IO              ?
           4       DO      Data            1
       * blargg verified Data read is cycle 4.
       * 2 and 3 could be swapped, but that would be odd.
    """

    def __init__(self, dst, src):
        super().__init__()
        self.cycles = 4
        self.dst = dst
        self.src = src

    def name(self, mnemonic):
        return f"{mnemonic.lower()}_register_direct_indexed_{self.dst}_{self.src}"

    def render(self, mnemonic, payload):
        header = inspect.cleandoc(
            f"""
            {self.declaration(mnemonic)}
            {{
                {trace_source()}
                struct CPU_State* const cpu = &state->cpu;

                if (cycle < 2 || cycle > {self.cycles}) {{ return {InstructionStatus.UnexpectedCycle}; }}

                switch (cycle) {{
                    case 2:
                        {read_pc_to("cpu->operands[0]")}
                        // direct offset indexed by {self.src.name}
                        // wrapped within the direct page
                        cpu->data8[0] = (cpu->operands[0] + cpu->{self.src}) & 0xff;
                        return {InstructionStatus.Pending};
                    case 3:
                        {idle_cycle()}
                        return {InstructionStatus.Pending};
                    case 4: {{
                        cpu->addr = direct_page(cpu, cpu->data8[0]);
                        {read_from_addr("cpu->data8[0]")}
            """
        )

        footer = inspect.cleandoc(
            f"""
                        return {InstructionStatus.Done};
                    }}
                    default:
                        UNREACHABLE();
                }}
            }}
            """
        )

        return assemble_instruction(header, payload, footer, indent_depth=3)

    @classmethod
    def register_instructions(cls):
        add_instruction(
            0x94,
            TemplateInstruction(
                "ADC",
                "ADC   A, d+X",
                cls(Register.A, Register.X),
                do_adc_a(),
            ),
        )
        add_instruction(
            0x34,
            TemplateInstruction(
                "AND",
                "AND   A, d+X",
                cls(Register.A, Register.X),
                do_and_a(),
            ),
        )
        add_instruction(
            0x74,
            TemplateInstruction(
                "CMP",
                "CMP   A, d+X",
                cls(Register.A, Register.X),
                do_cmp_a(),
            ),
        )
        add_instruction(
            0x54,
            TemplateInstruction(
                "EOR",
                "EOR   A, d+X",
                cls(Register.A, Register.X),
                do_xor_a(),
            ),
        )
        add_instruction(
            0xF4,
            TemplateInstruction(
                "MOV",
                "MOV   A, d+X",
                cls(Register.A, Register.X),
                load_a(),
            ),
        )
        add_instruction(
            0xF9,
            TemplateInstruction(
                "MOV",
                "MOV   X, d+Y",
                cls(Register.X, Register.Y),
                load_x(),
            ),
        )
        add_instruction(
            0xFB,
            TemplateInstruction(
                "MOV",
                "MOV   Y, d+X",
                cls(Register.Y, Register.X),
                load_y(),
            ),
        )
        add_instruction(
            0x14,
            TemplateInstruction(
                "OR",
                "OR    A, d+X",
                cls(Register.A, Register.X),
                do_or_a(),
            ),
        )
        add_instruction(
            0xB4,
            TemplateInstruction(
                "SBC",
                "SBC   A, d+X",
                cls(Register.A, Register.X),
                do_sbc_a(),
            ),
        )


class RegisterIndirectMode(AddressingMode):
    """
    5a Register, Indirect -- A,(X)
     (ADC,AND,CMP,EOR,MOV,OR,SBC)
     (1 byte)
     (3 cycles)
           1       PC      Op Code         1
           2       ??      IO              ?
           3       X       Data            1
    """

    def __init__(self):
        super().__init__()
        self.cycles = 3

    def name(self, mnemonic):
        return f"{mnemonic.lower()}_register_indirect"

    def render(self, mnemonic, payload):
        header = inspect.cleandoc(
            f"""
            {self.declaration(mnemonic)}
            {{
                {trace_source()}
                struct CPU_State* const cpu = &state->cpu;

                if (cycle < 2 || cycle > {self.cycles}) {{ return {InstructionStatus.UnexpectedCycle}; }}

                switch (cycle) {{
                    case 2:
                        // an idle cycle - dummy read from last latched addr (PC from opcode fetch)
                        {idle_cycle()}
                        return {InstructionStatus.Pending};
                    case 3: {{
                        cpu->addr = direct_page(cpu, cpu->x);
                        {read_from_addr("cpu->data8[0]")}
            """
        )

        footer = inspect.cleandoc(
            f"""
                        return {InstructionStatus.Done};
                    }}
                    default:
                        UNREACHABLE();
                }}
            }}
            """
        )

        return assemble_instruction(header, payload, footer, indent_depth=3)

    @classmethod
    def register_instructions(cls):
        add_instruction(
            0x86,
            TemplateInstruction(
                "ADC",
                "ADC   A, (X)",
                cls(),
                do_adc_a(),
            ),
        )
        add_instruction(
            0x26,
            TemplateInstruction(
                "AND",
                "AND   A, (X)",
                cls(),
                do_and_a(),
            ),
        )
        add_instruction(
            0x66,
            TemplateInstruction(
                "CMP",
                "CMP   A, (X)",
                cls(),
                do_cmp_a(),
            ),
        )
        add_instruction(
            0x46,
            TemplateInstruction(
                "EOR",
                "EOR   A, (X)",
                cls(),
                do_xor_a(),
            ),
        )
        add_instruction(
            0xE6,
            TemplateInstruction(
                "MOV",
                "MOV   A, (X)",
                cls(),
                load_a(),
            ),
        )
        add_instruction(
            0x06,
            TemplateInstruction(
                "OR",
                "OR    A, (X)",
                cls(),
                do_or_a(),
            ),
        )
        add_instruction(
            0xA6,
            TemplateInstruction(
                "SBC",
                "SBC   A, (X)",
                cls(),
                do_sbc_a(),
            ),
        )


def generate_register_indirect_incremented():
    """
    5b Register, Indirect++ -- A,(X)+
     (MOV)
     (1 byte)
     (4 cycles)
           1       PC      Op Code         1
           2       ??      IO              ?
           3       X       Data            1
           4       ??      IO              ?
       * Verified by blargg.
    """
    add_instruction(
        0xBF,
        HardcodedInstruction(
            mnemonic="MOV",
            _full_mnemonic="MOV   A, (X)+",
            function_name="mov_register_indirect_incremented",
            body=inspect.cleandoc(
                f"""
                {{
                    {trace_source()}
                    struct CPU_State* const cpu = &state->cpu;

                    if (cycle < 2 || cycle > 4) {{ return {InstructionStatus.UnexpectedCycle}; }}

                    switch (cycle) {{
                        case 2:
                            /* internal operation - dummy read from last latched addr */
                            {idle_cycle()}
                            return {InstructionStatus.Pending};
                        case 3:
                            cpu->addr = direct_page(cpu, cpu->x);
                            {read_from_addr("cpu->data8[0]")}
                            cpu->a = cpu->data8[0];
                            psw_write_zero(cpu, cpu->a == 0);
                            psw_write_neg(cpu, cpu->a & 0x80);
                            /* we could increment X now but let's do it cycle 4 bc why not */
                            return {InstructionStatus.Pending};
                        case 4:
                            /* internal operation - dummy read from last latched addr */
                            {idle_cycle()}
                            cpu->x += 1;
                            return {InstructionStatus.Done};
                        default:
                            UNREACHABLE();
                    }}
                }}
                """
            ),
        ),
    )


class RegisterIndexedIndirectMode(AddressingMode):
    """
    6 Register, Indexed Indirect -- A,[d+X]
     (ADC,AND,CMP,EOR,MOV,OR,SBC)
     (2 bytes)
     (6 cycles)
           1       PC      Op Code         1
           2       PC+1    DO              1
           3       ??      IO              ?
           4       DO+X    AAL             1
           5       DO+X+1  AAH             1
           6       AA      Data            1
       * blargg verifies the Data read is cycle 6.
       * Cycles 2-5 could be rearranged, but this is most likely.
    """

    def __init__(self):
        super().__init__()
        self.cycles = 6

    def name(self, mnemonic):
        return f"{mnemonic.lower()}_register_indexed_indirect"

    def render(self, mnemonic, payload):
        header = inspect.cleandoc(
            f"""
            {self.declaration(mnemonic)}
            {{
                {trace_source()}
                struct CPU_State* const cpu = &state->cpu;

                if (cycle < 2 || cycle > {self.cycles}) {{ return {InstructionStatus.UnexpectedCycle}; }}

                switch (cycle) {{
                    case 2:
                        {read_pc_to("cpu->operands[0]")}
                        // &AAL on the direct page
                        cpu->data8[0] = cpu->operands[0] + cpu->x;
                        // &AAH on the direct page as well (wrapped to the 256B page)
                        cpu->data8[1] = cpu->data8[0] + 1;
                        return {InstructionStatus.Pending};
                    case 3:
                        /* internal operation - dummy read from last latched addr */
                        {idle_cycle()}
                        return {InstructionStatus.Pending};
                    case 4:
                        // first indirection
                        // AAL
                        cpu->addr = direct_page(cpu, cpu->data8[0]);
                        {read_from_addr("cpu->data8[0]")}
                        return {InstructionStatus.Pending};
                    case 5:
                        // AAH
                        cpu->addr = direct_page(cpu, cpu->data8[1]);
                        {read_from_addr("cpu->data8[1]")}
                        return {InstructionStatus.Pending};
                    case 6: {{
                        // assemble the absolute address
                        cpu->addr = u16_read_little_endian(cpu->data8);
                        // second indirection
                        {read_from_addr("cpu->data8[0]")}
                        // operand is ready for ALU execution
            """
        )

        footer = inspect.cleandoc(
            f"""
                        return {InstructionStatus.Done};
                    }}
                    default:
                        UNREACHABLE();
                }}
            }}
            """
        )

        return assemble_instruction(header, payload, footer, indent_depth=3)

    @classmethod
    def register_instructions(cls):
        add_instruction(
            0x87,
            TemplateInstruction(
                "ADC",
                "ADC   A, [d+X]",
                cls(),
                do_adc_a(),
            ),
        )
        add_instruction(
            0x27,
            TemplateInstruction(
                "AND",
                "AND   A, [d+X]",
                cls(),
                do_and_a(),
            ),
        )
        add_instruction(
            0x67,
            TemplateInstruction(
                "CMP",
                "CMP   A, [d+X]",
                cls(),
                do_cmp_a(),
            ),
        )
        add_instruction(
            0x47,
            TemplateInstruction(
                "EOR",
                "EOR   A, [d+X]",
                cls(),
                do_xor_a(),
            ),
        )
        add_instruction(
            0xE7,
            TemplateInstruction(
                "MOV",
                "MOV   A, [d+X]",
                cls(),
                load_a(),
            ),
        )
        add_instruction(
            0x07,
            TemplateInstruction(
                "OR",
                "OR    A, [d+X]",
                cls(),
                do_or_a(),
            ),
        )
        add_instruction(
            0xA7,
            TemplateInstruction(
                "SBC",
                "SBC   A, [d+X]",
                cls(),
                do_sbc_a(),
            ),
        )


class RegisterIndirectIndexedMode(AddressingMode):
    """
    7 Register, Indirect Indexed -- A,[d]+Y
     (ADC,AND,CMP,EOR,MOV,OR,SBC)
     (2 bytes)
     (6 cycles)
           1       PC      Op Code         1
           2       PC+1    DO              1
           3       DO      AAL             1
           4       DO+1    AAH             1
           5       ??      IO              ?
           6       AA+Y    Data            1
       * blargg verifies the Data read is cycle 6.
       * Cycles 2-5 could be rearranged, but this is most likely.
    """

    def __init__(self):
        super().__init__()
        self.cycles = 6

    def name(self, mnemonic):
        return f"{mnemonic.lower()}_register_indirect_indexed"

    def render(self, mnemonic, payload):
        header = inspect.cleandoc(
            f"""
            {self.declaration(mnemonic)}
            {{
                {trace_source()}
                struct CPU_State* const cpu = &state->cpu;

                if (cycle < 2 || cycle > {self.cycles}) {{ return {InstructionStatus.UnexpectedCycle}; }}

                switch (cycle) {{
                    case 2:
                        {read_pc_to("cpu->operands[0]")}
                        return {InstructionStatus.Pending};
                    case 3:
                        // AAL
                        cpu->addr = direct_page(cpu, cpu->operands[0]);
                        {read_from_addr("cpu->data8[0]")}
                        return {InstructionStatus.Pending};
                    case 4:
                        // AAH
                        cpu->addr = direct_page(cpu, cpu->operands[0] + 1);
                        {read_from_addr("cpu->data8[1]")}
                        // AA
                        cpu->addr = u16_read_little_endian(cpu->data8);
                        return {InstructionStatus.Pending};
                    case 5:
                        {idle_cycle()} // read before the indexing
                        cpu->addr += cpu->y;
                        return {InstructionStatus.Pending};
                    case 6: {{
                        // data is ready to hit the ALU
                        {read_from_addr("cpu->data8[0]")}
            """
        )

        footer = inspect.cleandoc(
            f"""
                        return {InstructionStatus.Done};
                    }}
                    default:
                        UNREACHABLE();
                }}
            }}
            """
        )

        return assemble_instruction(header, payload, footer, indent_depth=3)

    @classmethod
    def register_instructions(cls):
        add_instruction(
            0x97,
            TemplateInstruction(
                "ADC",
                "ADC   A, [d]+Y",
                cls(),
                do_adc_a(),
            ),
        )
        add_instruction(
            0x37,
            TemplateInstruction(
                "AND",
                "AND   A, [d]+Y",
                cls(),
                do_and_a(),
            ),
        )
        add_instruction(
            0x77,
            TemplateInstruction(
                "CMP",
                "CMP   A, [d]+Y",
                cls(),
                do_cmp_a(),
            ),
        )
        add_instruction(
            0x57,
            TemplateInstruction(
                "EOR",
                "EOR   A, [d]+Y",
                cls(),
                do_xor_a(),
            ),
        )
        add_instruction(
            0xF7,
            TemplateInstruction(
                "MOV",
                "MOV   A, [d]+Y",
                cls(),
                load_a(),
            ),
        )
        add_instruction(
            0x17,
            TemplateInstruction(
                "OR",
                "OR    A, [d]+Y",
                cls(),
                do_or_a(),
            ),
        )
        add_instruction(
            0xB7,
            TemplateInstruction(
                "SBC",
                "SBC   A, [d]+Y",
                cls(),
                do_sbc_a(),
            ),
        )


class RegisterAbsolute(AddressingMode):
    """
    8 Register, Absolute -- A,!a; X,!a; Y,!a
     (ADC,AND,CMP,CMP,CMP,EOR,MOV,MOV,MOV,OR,SBC)
     (3 bytes)
     (4 cycles)
           1       PC      Op Code         1
           2       PC+1    AAL             1
           3       PC+2    AAH             1
           4       AA      Data            1
       * Verified by blargg.
       * 2 and 3 could be swapped, but that would be odd.
    """

    def __init__(self, reg):
        super().__init__()
        self.cycles = 4
        self.reg = reg

    def name(self, mnemonic):
        return f"{mnemonic.lower()}_register_absolute_{self.reg}"

    def render(self, mnemonic, payload):
        header = inspect.cleandoc(
            f"""
            {self.declaration(mnemonic)}
            {{
                {trace_source()}
                struct CPU_State* const cpu = &state->cpu;

                if (cycle < 2 || cycle > {self.cycles}) {{ return {InstructionStatus.UnexpectedCycle}; }}

                switch (cycle) {{
                    case 2:
                        // AAL
                        {read_pc_to("cpu->operands[0]")}
                        return {InstructionStatus.Pending};
                    case 3:
                        // AAH
                        {read_pc_to("cpu->operands[1]")}
                        // full absolute address
                        cpu->addr = u16_parse(cpu->operands[0], cpu->operands[1]);
                        return {InstructionStatus.Pending};
                    case 4: {{
                        // data is ready to hit the ALU
                        {read_from_addr("cpu->data8[0]")}
            """
        )

        footer = inspect.cleandoc(
            f"""
                        return {InstructionStatus.Done};
                    }}
                    default:
                        UNREACHABLE();
                }}
            }}
            """
        )

        return assemble_instruction(header, payload, footer, indent_depth=3)

    @classmethod
    def register_instructions(cls):
        add_instruction(
            0x85,
            TemplateInstruction(
                "ADC",
                "ADC   A, !a",
                cls(Register.A),
                do_adc_a(),
            ),
        )
        add_instruction(
            0x25,
            TemplateInstruction(
                "AND",
                "AND   A, !a",
                cls(Register.A),
                do_and_a(),
            ),
        )
        add_instruction(
            0x65,
            TemplateInstruction(
                "CMP",
                "CMP   A, !a",
                cls(Register.A),
                do_cmp_a(),
            ),
        )
        add_instruction(
            0x1E,
            TemplateInstruction(
                "CMP",
                "CMP   X, !a",
                cls(Register.X),
                do_cmp_x(),
            ),
        )
        add_instruction(
            0x5E,
            TemplateInstruction(
                "CMP",
                "CMP   Y, !a",
                cls(Register.Y),
                do_cmp_y(),
            ),
        )
        add_instruction(
            0x45,
            TemplateInstruction(
                "EOR",
                "EOR   A, !a",
                cls(Register.A),
                do_xor_a(),
            ),
        )
        add_instruction(
            0xE5,
            TemplateInstruction(
                "MOV",
                "MOV   A, !a",
                cls(Register.A),
                load_a(),
            ),
        )
        add_instruction(
            0xE9,
            TemplateInstruction(
                "MOV",
                "MOV   X, !a",
                cls(Register.X),
                load_x(),
            ),
        )
        add_instruction(
            0xEC,
            TemplateInstruction(
                "MOV",
                "MOV   Y, !a",
                cls(Register.Y),
                load_y(),
            ),
        )
        add_instruction(
            0x05,
            TemplateInstruction(
                "OR",
                "OR    A, !a",
                cls(Register.A),
                do_or_a(),
            ),
        )
        add_instruction(
            0xA5,
            TemplateInstruction(
                "SBC",
                "SBC   A, !a",
                cls(Register.A),
                do_sbc_a(),
            ),
        )


class RegisterAbsoluteIndexed(AddressingMode):
    """
    9 Register, Absolute Indexed -- A,!a+X; A,!a+Y
     (ADC,ADC,AND,AND,CMP,CMP,EOR,EOR,MOV,MOV,OR,OR,SBC,SBC)
     (3 bytes)
     (5 cycles)
           1       PC      Op Code         1
           2       PC+1    AAL             1
           3       PC+2    AAH             1
           4       ??      IO              ?
           5       AA+X/Y  Data            1
       * blargg verifies Data read is cycle 5.
       * Cycles 2-4 could be in other orders, but this is most likely.
    """

    def __init__(self, reg):
        super().__init__()
        self.cycles = 5
        self.reg = reg

    def name(self, mnemonic):
        return f"{mnemonic.lower()}_register_absolute_indexed_{self.reg}"

    def render(self, mnemonic, payload):
        header = inspect.cleandoc(
            f"""
            {self.declaration(mnemonic)}
            {{
                {trace_source()}
                struct CPU_State* const cpu = &state->cpu;

                if (cycle < 2 || cycle > {self.cycles}) {{ return {InstructionStatus.UnexpectedCycle}; }}

                switch (cycle) {{
                    case 2:
                        // AAL
                        {read_pc_to("cpu->operands[0]")}
                        return {InstructionStatus.Pending};
                    case 3:
                        // AAH
                        {read_pc_to("cpu->operands[1]")}
                        // full absolute address (before indexing)
                        cpu->addr = u16_parse(cpu->operands[0], cpu->operands[1]);
                        return {InstructionStatus.Pending};
                    case 4:
                        {idle_cycle()}
                        // index AA now
                        cpu->addr += cpu->{self.reg};
                        return {InstructionStatus.Pending};
                    case 5: {{
                        // data is ready to hit the ALU
                        {read_from_addr("cpu->data8[0]")}
            """
        )

        footer = inspect.cleandoc(
            f"""
                        return {InstructionStatus.Done};
                    }}
                    default:
                        UNREACHABLE();
                }}
            }}
            """
        )

        return assemble_instruction(header, payload, footer, indent_depth=3)

    @classmethod
    def register_instructions(cls):
        add_instruction(
            0x95,
            TemplateInstruction(
                "ADC",
                "ADC   A, !a+X",
                cls(Register.X),
                do_adc_a(),
            ),
        )
        add_instruction(
            0x96,
            TemplateInstruction(
                "ADC",
                "ADC   A, !a+Y",
                cls(Register.Y),
                do_adc_a(),
            ),
        )
        add_instruction(
            0x35,
            TemplateInstruction(
                "AND",
                "AND   A, !a+X",
                cls(Register.X),
                do_and_a(),
            ),
        )
        add_instruction(
            0x36,
            TemplateInstruction(
                "AND",
                "AND   A, !a+Y",
                cls(Register.Y),
                do_and_a(),
            ),
        )
        add_instruction(
            0x75,
            TemplateInstruction(
                "CMP",
                "CMP   A, !a+X",
                cls(Register.X),
                do_cmp_a(),
            ),
        )
        add_instruction(
            0x76,
            TemplateInstruction(
                "CMP",
                "CMP   A, !a+Y",
                cls(Register.Y),
                do_cmp_a(),
            ),
        )
        add_instruction(
            0x55,
            TemplateInstruction(
                "EOR",
                "EOR   A, !a+X",
                cls(Register.X),
                do_xor_a(),
            ),
        )
        add_instruction(
            0x56,
            TemplateInstruction(
                "EOR",
                "EOR   A, !a+Y",
                cls(Register.Y),
                do_xor_a(),
            ),
        )
        add_instruction(
            0xF5,
            TemplateInstruction(
                "MOV",
                "MOV   A, !a+X",
                cls(Register.X),
                load_a(),
            ),
        )
        add_instruction(
            0xF6,
            TemplateInstruction(
                "MOV",
                "MOV   A, !a+Y",
                cls(Register.Y),
                load_a(),
            ),
        )
        add_instruction(
            0x15,
            TemplateInstruction(
                "OR",
                "OR    A, !a+X",
                cls(Register.X),
                do_or_a(),
            ),
        )
        add_instruction(
            0x16,
            TemplateInstruction(
                "OR",
                "OR    A, !a+Y",
                cls(Register.Y),
                do_or_a(),
            ),
        )
        add_instruction(
            0xB5,
            TemplateInstruction(
                "SBC",
                "SBC   A, !a+X",
                cls(Register.X),
                do_sbc_a(),
            ),
        )
        add_instruction(
            0xB6,
            TemplateInstruction(
                "SBC",
                "SBC   A, !a+Y",
                cls(Register.Y),
                do_sbc_a(),
            ),
        )


# write (d) in data8[0], #i in data8[1] and the cache back address in addr
class DirectImmediateMode(AddressingMode):
    """
    10 Direct, Immediate -- d,#i
     (ADC,AND,CMP,EOR,MOV,OR,SBC)
     (3 bytes)
     (5 cycles)
           1       PC      Op Code         1
           2       PC+1    Data 1          1
           3       PC+2    DO              1
           4       DO      Data 2 (read)   1
           5       DO      Data 2 (write)  0
       * Verified by blargg. 2 and 3 could be swapped, but that's unlikely.
       * Yes, RMW even for MOV.
       * CMP does not write for cycle 5; does it IO or read again?
    """

    def __init__(self):
        super().__init__()
        self.cycles = 5

    def name(self, mnemonic):
        return f"{mnemonic.lower()}_direct_immediate"

    def render(self, mnemonic, payload):
        header = inspect.cleandoc(
            f"""
            {self.declaration(mnemonic)}
            {{
                {trace_source()}
                struct CPU_State* const cpu = &state->cpu;

                if (cycle < 2 || cycle > {self.cycles}) {{ return {InstructionStatus.UnexpectedCycle}; }}

                switch (cycle) {{
                    case 2:
                        // #i
                        {read_pc_to("cpu->operands[0]")}
                        cpu->data8[1] = cpu->operands[0];
                        return {InstructionStatus.Pending};
                    case 3:
                        // direct page
                        {read_pc_to("cpu->operands[1]")}
                        cpu->addr = direct_page(cpu, cpu->operands[1]);
                        return {InstructionStatus.Pending};
                    case 4:
                        // data
                        {read_from_addr("cpu->data8[0]")}
                        return {InstructionStatus.Pending};
                    case 5: {{
            """
        )

        footer = inspect.cleandoc(
            f"""
                        return {InstructionStatus.Done};
                    }}
                    default:
                        UNREACHABLE();
                }}
            }}
            """
        )

        return assemble_instruction(header, payload, footer, indent_depth=3)

    @classmethod
    def register_instructions(cls):
        add_instruction(
            0x98,
            TemplateInstruction(
                "ADC",
                "ADC   d, #i",
                cls(),
                do_adc8_mem(),
            ),
        )
        add_instruction(
            0x38,
            TemplateInstruction(
                "AND",
                "AND   d, #i",
                cls(),
                do_and_mem(),
            ),
        )
        add_instruction(
            0x78,
            TemplateInstruction(
                "CMP",
                "CMP   d, #i",
                cls(),
                do_cmp_mem(),
            ),
        )
        add_instruction(
            0x58,
            TemplateInstruction(
                "EOR",
                "EOR   d, #i",
                cls(),
                do_xor_mem(),
            ),
        )
        add_instruction(
            0x8F,
            TemplateInstruction(
                "MOV",
                "MOV   d, #i",
                cls(),
                [trace_source(), "bus_write(state, cpu->addr, cpu->data8[1]);"],
            ),
        )
        add_instruction(
            0x18,
            TemplateInstruction(
                "OR",
                "OR    d, #i",
                cls(),
                do_or_mem(),
            ),
        )
        add_instruction(
            0xB8,
            TemplateInstruction(
                "SBC",
                "SBC   d, #i",
                cls(),
                do_sbc8_mem(),
            ),
        )


class DirectRegister(AddressingMode):
    """
    11 Direct, Register -- d,A; d,X; d,Y
     (MOV,MOV,MOV)
     (2 bytes)
     (4 cycles)
           1       PC      Op Code         1
           2       PC+1    DO              1
           3       DO      Data (read)     1
           4       DO      Data (write)    0
       * Verified by blargg.
       * Yes, RMW even for MOV
    """

    def __init__(self, reg):
        super().__init__()
        self.cycles = 4
        self.reg = reg

    def name(self, mnemonic):
        return f"{mnemonic.lower()}_direct_register_{self.reg}"

    def render(self, mnemonic, payload):
        header = inspect.cleandoc(
            f"""
            {self.declaration(mnemonic)}
            {{
                {trace_source()}
                struct CPU_State* const cpu = &state->cpu;

                if (cycle < 2 || cycle > {self.cycles}) {{ return {InstructionStatus.UnexpectedCycle}; }}

                switch (cycle) {{
                    case 2:
                        {read_pc_to("cpu->operands[0]")}
                        cpu->addr = direct_page(cpu, cpu->operands[0]);
                        return {InstructionStatus.Pending};
                    case 3:
                        // "useless" read in RMW mov
                        {read_from_addr("cpu->data8[0]")}
                        return {InstructionStatus.Pending};
                    case 4: {{
            """
        )

        footer = inspect.cleandoc(
            f"""
                        return {InstructionStatus.Done};
                    }}
                    default:
                        UNREACHABLE();
                }}
            }}
            """
        )

        return assemble_instruction(header, payload, footer, indent_depth=3)

    @classmethod
    def register_instructions(cls):
        reg = Register.A
        add_instruction(
            0xC4,
            TemplateInstruction(
                "MOV",
                f"MOV   d, {reg}",
                cls(reg),
                [trace_source(), f"bus_write(state, cpu->addr, cpu->{reg});"],
            ),
        )
        reg = Register.X
        add_instruction(
            0xD8,
            TemplateInstruction(
                "MOV",
                f"MOV   d, {reg}",
                cls(reg),
                [trace_source(), f"bus_write(state, cpu->addr, cpu->{reg});"],
            ),
        )
        reg = Register.Y
        add_instruction(
            0xCB,
            TemplateInstruction(
                "MOV",
                f"MOV   d, {reg}",
                cls(reg),
                [trace_source(), f"bus_write(state, cpu->addr, cpu->{reg});"],
            ),
        )


def generate_Anomie_13():
    """
    13a Indirect, Register -- (X),A
     (MOV)
     (1 byte)
     (4 cycles)
           1       PC      Op Code         1
           2       ??      IO              ?
           3       X       Data (read)     1
           4       X       Data (write)    0
       * Verified by blargg.
       * Yes, RMW even for MOV

    13b Indirect++, Register -- (X)+,A
     (MOV)
     (1 byte)
     (4 cycles)
           1       PC      Op Code         1
           2       ??      IO              ?
           3       ??      IO              ?
           4       DO      Data (write)    0
       * Verified by blargg.
       * No RMW here
    """
    "C6: (X) = A"
    "AF: (X++) = A"
    add_instruction(
        0xC6,
        HardcodedInstruction(
            mnemonic="MOV",
            _full_mnemonic="MOV   (X), A",
            function_name="mov_indirect_register",
            body=inspect.cleandoc(
                f"""
                {{
                    {trace_source()}
                    struct CPU_State* const cpu = &state->cpu;

                    if (cycle < 2 || cycle > 4) {{ return {InstructionStatus.UnexpectedCycle}; }}

                    switch (cycle) {{
                        case 2:
                            /* internal operation - dummy read from last latched addr */
                            {idle_cycle()}
                            cpu->addr = direct_page(cpu, cpu->x);
                            return {InstructionStatus.Pending};
                        case 3:
                            // "useless" read for RMW MOV
                            (void)bus_read(state, cpu->addr);
                            return {InstructionStatus.Pending};
                        case 4:
                            {write_to_addr("cpu->a")}
                            return {InstructionStatus.Done};
                        default:
                            UNREACHABLE();
                    }}
                }}
                """
            ),
        ),
    )
    add_instruction(
        0xAF,
        HardcodedInstruction(
            mnemonic="MOV",
            _full_mnemonic="MOV   (X)+, A",
            function_name="mov_indirect_incremented_register",
            body=inspect.cleandoc(
                f"""
                {{
                    {trace_source()}
                    struct CPU_State* const cpu = &state->cpu;

                    if (cycle < 2 || cycle > 4) {{ return {InstructionStatus.UnexpectedCycle}; }}

                    switch (cycle) {{
                        case 2:
                            /* internal operation - dummy read from last latched addr */
                            {idle_cycle()}
                            cpu->addr = direct_page(cpu, cpu->x++);
                            return {InstructionStatus.Pending};
                        case 3:
                            /* internal operation - dummy read from last latched addr */
                            {idle_cycle()}
                            return {InstructionStatus.Pending};
                        case 4:
                            {write_to_addr("cpu->a")}
                            return {InstructionStatus.Done};
                        default:
                            UNREACHABLE();
                    }}
                }}
                """
            ),
        ),
    )


def generate_indexed_indirect_register():
    """
    14 Indexed Indirect, Register -- [d+X],A
     (MOV)
     (2 bytes)
     (7 cycles)
           1       PC      Op Code         1
           2       PC+1    DO              1
           3       ??      IO              ?
           4       DO+X    AAL             1
           5       DO+X+1  AAH             1
           6       AA      Data (read)     1
           7       AA      Data (write)    0
       * blargg verifies cycles 6 and 7.
       * Yes, RMW even for MOV
    """
    add_instruction(
        0xC7,
        HardcodedInstruction(
            mnemonic="MOV",
            _full_mnemonic="MOV   [d+X],A",
            function_name="mov_indexed_indirect_register",
            body=inspect.cleandoc(
                f"""
            {{
                {trace_source()}
                struct CPU_State* const cpu = &state->cpu;

                if (cycle < 2 || cycle > 7) {{ return {InstructionStatus.UnexpectedCycle}; }}

                switch (cycle) {{
                    case 2:
                        {read_pc_to("cpu->operands[0]")}
                        cpu->data8[0] = cpu->operands[0] + cpu->x;
                        return {InstructionStatus.Pending};
                    case 3:
                        /* internal operation - dummy read from last latched addr */
                        {idle_cycle()}
                        return {InstructionStatus.Pending};
                    case 4:
                        // AAL
                        cpu->addr = direct_page(cpu, cpu->data8[0]);
                        {read_from_addr("cpu->data8[1]")}
                        return {InstructionStatus.Pending};
                    case 5:
                        // AAH
                        cpu->addr = direct_page(cpu, cpu->data8[0] + 1);
                        {read_from_addr("cpu->data8[0]")}
                        cpu->addr = u16_read_big_endian(cpu->data8);
                        return {InstructionStatus.Pending};
                    case 6:
                        // "useless" RMW read
                        (void)bus_read(state, cpu->addr);
                        return {InstructionStatus.Pending};
                    case 7:
                        {write_to_addr("cpu->a")}
                        return {InstructionStatus.Done};
                    default:
                        UNREACHABLE();
                }}
            }}
            """
            ),
        ),
    )


def generate_indirect_indexed_register():
    """
    15 Indirect Indexed, Register -- [d]+Y,A
     (MOV)
     (2 bytes)
     (7 cycles)
           1       PC      Op Code         1
           2       PC+1    DO              1
           3       DO      AAL             1
           4       DO+1    AAH             1
           5       ??      IO              ?
           6       AA+Y    Data (read)     1
           7       AA+Y    Data (write)    0
       * blargg verifies cycles 6 and 7.
       * Yes, RMW even for MOV
    """
    add_instruction(
        0xD7,
        HardcodedInstruction(
            mnemonic="MOV",
            _full_mnemonic="MOV   [d]+Y,A",
            function_name="mov_indirect_indexed_register",
            body=inspect.cleandoc(
                f"""
            {{
                {trace_source()}
                struct CPU_State* const cpu = &state->cpu;

                if (cycle < 2 || cycle > 7) {{ return {InstructionStatus.UnexpectedCycle}; }}

                switch (cycle) {{
                    case 2:
                        {read_pc_to("cpu->operands[0]")}
                        cpu->addr = direct_page(cpu, cpu->operands[0]);
                        return {InstructionStatus.Pending};
                    case 3:
                        // AAL
                        {read_from_addr("cpu->data8[0]")}
                        cpu->addr = direct_page(cpu, cpu->operands[0] + 1);
                        return {InstructionStatus.Pending};
                    case 4:
                        // AAH
                        {read_from_addr("cpu->data8[1]")}
                        // compute AA + Y, but don't latch yet (next cycle is idle)
                        cpu->data16 = u16_read_little_endian(cpu->data8) + cpu->y;
                        return {InstructionStatus.Pending};
                    case 5:
                        // internal operations - dummy read from last latched addr
                        {idle_cycle()}
                        cpu->addr = cpu->data16;
                        return {InstructionStatus.Pending};
                    case 6:
                        // "useless" RMW read
                        (void)bus_read(state, cpu->addr);
                        return {InstructionStatus.Pending};
                    case 7:
                        {write_to_addr("cpu->a")}
                        return {InstructionStatus.Done};
                    default:
                        UNREACHABLE();
                }}
            }}
            """
            ),
        ),
    )


def generate_absolute_register():
    """
    16 Absolute, Register -- !a,A; !a,X; !a,Y
     (MOV,MOV,MOV)
     (3 bytes)
     (5 cycles)
           1       PC      Op Code         1
           2       PC+1    AAL             1
           3       PC+2    AAH             1
           4       AA      Data (read)     1
           5       AA      Data (write)    0
       * Verified by blargg. 2 and 3 could be swapped, but that's unlikely.
       * Yes, RMW even for MOV
    """

    def generate_absolute_register_inner(opcode, reg):
        add_instruction(
            opcode,
            HardcodedInstruction(
                mnemonic="MOV",
                _full_mnemonic=f"MOV   !a, {reg}",
                function_name=f"mov_absolute_{reg}",
                body=inspect.cleandoc(
                    f"""
                {{
                    {trace_source()}
                    struct CPU_State* const cpu = &state->cpu;

                    if (cycle < 2 || cycle > 5) {{ return {InstructionStatus.UnexpectedCycle}; }}

                    switch (cycle) {{
                        case 2:
                            {read_pc_to("cpu->operands[0]")}
                            // AAL
                            cpu->data8[0] = cpu->operands[0];
                            return {InstructionStatus.Pending};
                        case 3:
                            {read_pc_to("cpu->operands[1]")}
                            // AAH
                            cpu->data8[1] = cpu->operands[1];
                            cpu->addr = u16_read_little_endian(cpu->data8);
                            return {InstructionStatus.Pending};
                        case 4:
                            // "useless" RMW read
                            (void)bus_read(state, cpu->addr);
                            return {InstructionStatus.Pending};
                        case 5:
                            {write_to_addr(f"cpu->{reg}")}
                            return {InstructionStatus.Done};
                        default:
                            UNREACHABLE();
                    }}
                }}
                """
                ),
            ),
        )

    generate_absolute_register_inner(0xC5, Register.A)
    generate_absolute_register_inner(0xC9, Register.X)
    generate_absolute_register_inner(0xCC, Register.Y)


def generate_absolute_indexed_register():
    """
    17 Absolute Indexed, Register -- !a+X,A; !a+Y,A
     (MOV,MOV)
     (3 bytes)
     (6 cycles)
           1       PC      Op Code         1
           2       PC+1    AAL             1
           3       PC+2    AAH             1
           4       ??      IO              ?
           5       AA+X/Y  Data (read)     1
           6       AA+X/Y  Data (write)    0
       * blargg verified cycles 5 and 6.
       * Yes, RMW even for MOV
    """

    def generate_absolute_indexed_register_inner(opcode, reg):
        add_instruction(
            opcode,
            HardcodedInstruction(
                mnemonic="MOV",
                _full_mnemonic=f"MOV   !a+{reg}, A",
                function_name=f"mov_absolute_indexed_{reg}",
                body=inspect.cleandoc(
                    f"""
                {{
                    {trace_source()}
                    struct CPU_State* const cpu = &state->cpu;

                    if (cycle < 2 || cycle > 6) {{ return {InstructionStatus.UnexpectedCycle}; }}

                    switch (cycle) {{
                        case 2:
                            // AAL
                            {read_pc_to("cpu->operands[0]")}
                            cpu->data8[0] = cpu->operands[0];
                            return {InstructionStatus.Pending};
                        case 3:
                            // AAH
                            {read_pc_to("cpu->operands[1]")}
                            cpu->data8[1] = cpu->operands[1];
                            // compute AA + {reg} but don't latch yet (next cycle is idle)
                            cpu->data16 = u16_read_little_endian(cpu->data8) + cpu->{reg};
                            return {InstructionStatus.Pending};
                        case 4:
                            // internal operation - dummy read from last latched addr
                            {idle_cycle()}
                            cpu->addr = cpu->data16;
                            return {InstructionStatus.Pending};
                        case 5:
                            // "useless" RMW read for MOV
                            (void)bus_read(state, cpu->addr);
                            return {InstructionStatus.Pending};
                        case 6:
                            {write_to_addr("cpu->a")}
                            return {InstructionStatus.Done};
                        default:
                            UNREACHABLE();
                    }}
                }}
                """
                ),
            ),
        )

    generate_absolute_indexed_register_inner(0xD5, Register.X)
    generate_absolute_indexed_register_inner(0xD6, Register.Y)


class DirectDirect(AddressingMode):
    """
    18 Direct, Direct -- dd,ds
     (ADC,AND,CMP,EOR,MOV,OR,SBC)
     (3 bytes)
     (5 or 6 cycles)
           1       PC      Op Code         1
           2       PC+1    DS              1
           3       DS      Data 1          1
           4       PC+2    DD              1
          [5]      DD      Data 2 (read)   1
           6       DD      Data 2 (write)  0
       * Verified by blargg.
       * Skip cycle 5 for MOV, no RMW.
       * CMP does not write for cycle 6; does it IO or read again?
    """

    def __init__(self):
        super().__init__()
        self.cycles = 6

    def name(self, mnemonic):
        if mnemonic == "MOV":
            raise ValueError("Direct direct mov will be implemented as a special case")
        return f"{mnemonic.lower()}_direct_direct"

    def render(self, mnemonic, payload):
        header = inspect.cleandoc(
            f"""
            {self.declaration(mnemonic)}
            {{
                {trace_source()}
                struct CPU_State* const cpu = &state->cpu;

                if (cycle < 2 || cycle > {self.cycles}) {{ return {InstructionStatus.UnexpectedCycle}; }}

                switch (cycle) {{
                    case 2:
                        // DS - source address
                        {read_pc_to("cpu->operands[0]")}
                        cpu->addr = direct_page(cpu, cpu->operands[0]);
                        return {InstructionStatus.Pending};
                    case 3:
                        // Read data from source
                        {read_from_addr("cpu->data8[1]")}
                        return {InstructionStatus.Pending};
                    case 4:
                        // DD - destination address
                        {read_pc_to("cpu->operands[1]")}
                        cpu->addr = direct_page(cpu, cpu->operands[1]);
                        return {InstructionStatus.Pending};
                    case 5:
                        // Read data from dest
                        {read_from_addr("cpu->data8[0]")}
                        return {InstructionStatus.Pending};
                    case 6: {{
            """
        )

        footer = inspect.cleandoc(
            f"""
                        return {InstructionStatus.Done};
                    }}
                    default:
                        UNREACHABLE();
                }}
            }}
            """
        )

        return assemble_instruction(header, payload, footer, indent_depth=3)

    @classmethod
    def register_instructions(cls):
        add_instruction(
            0x89,
            TemplateInstruction(
                "ADC",
                "ADC   dd, ds",
                cls(),
                do_adc8_mem(),
            ),
        )
        add_instruction(
            0x29,
            TemplateInstruction(
                "AND",
                "AND   dd, ds",
                cls(),
                do_and_mem(),
            ),
        )
        add_instruction(
            0x69,
            TemplateInstruction(
                "CMP",
                "CMP   dd, ds",
                cls(),
                do_cmp_mem(),
            ),
        )
        add_instruction(
            0x49,
            TemplateInstruction(
                "EOR",
                "EOR   dd, ds",
                cls(),
                do_xor_mem(),
            ),
        )
        add_instruction(
            0x09,
            TemplateInstruction(
                "OR",
                "OR    dd, ds",
                cls(),
                do_or_mem(),
            ),
        )
        add_instruction(
            0xA9,
            TemplateInstruction(
                "SBC",
                "SBC   dd, ds",
                cls(),
                do_sbc8_mem(),
            ),
        )

        add_instruction(
            0xFA,
            HardcodedInstruction(
                mnemonic="MOV",
                _full_mnemonic=f"MOV   dd, ds",
                function_name=f"mov_direct_direct",
                body=inspect.cleandoc(
                    f"""
                {{
                    {trace_source()}
                    struct CPU_State* const cpu = &state->cpu;

                    if (cycle < 2 || cycle > 5) {{ return {InstructionStatus.UnexpectedCycle}; }}

                    switch (cycle) {{
                        case 2:
                            // DS - source address
                            {read_pc_to("cpu->operands[0]")}
                            cpu->addr = direct_page(cpu, cpu->operands[0]);
                            return {InstructionStatus.Pending};
                        case 3:
                            // Read data from source
                            {read_from_addr("cpu->data8[0]")}
                            return {InstructionStatus.Pending};
                        case 4:
                            // DD - destination address
                            {read_pc_to("cpu->operands[1]")}
                            cpu->addr = direct_page(cpu, cpu->operands[1]);
                            return {InstructionStatus.Pending};
                        case 5:
                            // no RMW read
                            {write_to_addr("cpu->data8[0]")}
                            return {InstructionStatus.Done};
                        default:
                            UNREACHABLE();
                    }}
                }}
                """
                ),
            ),
        )


class IndirectIndirect(AddressingMode):
    """
    19 Indirect, Indirect -- (X),(Y)
     (ADC,AND,CMP,EOR,OR,SBC)
     (1 byte)
     (5 cycles)
           1       PC      Op Code         1
           2       ??      IO              ?
           3       Y       Data 1          1
           4       X       Data 2 (read)   1
           5       X       Data 2 (write)  0
       * Verified by blargg.
       * CMP does not write for cycle 5; it is an IO cycle.
    """

    def __init__(self):
        super().__init__()
        self.cycles = 5

    def name(self, mnemonic):
        return f"{mnemonic.lower()}_indirect_indirect"

    def render(self, mnemonic, payload):
        header = inspect.cleandoc(
            f"""
            {self.declaration(mnemonic)}
            {{
                {trace_source()}
                struct CPU_State* const cpu = &state->cpu;

                if (cycle < 2 || cycle > {self.cycles}) {{ return {InstructionStatus.UnexpectedCycle}; }}

                switch (cycle) {{
                    case 2:
                        // internal operation - dummy read from last latched addr
                        {idle_cycle()}
                        return {InstructionStatus.Pending};
                    case 3:
                        // src: (Y)
                        cpu->addr = direct_page(cpu, cpu->y);
                        {read_from_addr("cpu->data8[1]")}
                        return {InstructionStatus.Pending};
                    case 4:
                        // dst: (X)
                        cpu->addr = direct_page(cpu, cpu->x);
                        {read_from_addr("cpu->data8[0]")}
                        return {InstructionStatus.Pending};
                    case 5: {{
            """
        )

        footer = inspect.cleandoc(
            f"""
                        return {InstructionStatus.Done};
                    }}
                    default:
                        UNREACHABLE();
                }}
            }}
            """
        )

        return assemble_instruction(header, payload, footer, indent_depth=3)

    @classmethod
    def register_instructions(cls):
        add_instruction(
            0x99,
            TemplateInstruction(
                "ADC",
                "ADC   (X), (Y)",
                cls(),
                do_adc8_mem(),
            ),
        )
        add_instruction(
            0x39,
            TemplateInstruction(
                "AND",
                "AND   (X), (Y)",
                cls(),
                do_and_mem(),
            ),
        )
        add_instruction(
            0x79,
            TemplateInstruction(
                "CMP",
                "CMP   (X), (Y)",
                cls(),
                do_cmp_mem(),
            ),
        )
        add_instruction(
            0x59,
            TemplateInstruction(
                "EOR",
                "EOR   (X), (Y)",
                cls(),
                do_xor_mem(),
            ),
        )
        add_instruction(
            0x19,
            TemplateInstruction(
                "OR",
                "OR    (X), (Y)",
                cls(),
                do_or_mem(),
            ),
        )
        add_instruction(
            0xB9,
            TemplateInstruction(
                "SBC",
                "SBC   (X), (Y)",
                cls(),
                do_sbc8_mem(),
            ),
        )


# not bitwise
class Direct(AddressingMode):
    """
    20a Direct (RMW) -- d
     (ASL,CLR1,DEC,INC,LSR,ROL,ROR,SET1)
     (2 bytes)
     (4 cycles)
           1       PC      Op Code         1
           2       PC+1    DO              1
           3       DO      Data (read)     1
           4       DO      Data (write)    0
       * Verified by blargg.
    """

    def __init__(self, bit=None):
        super().__init__()
        self.cycles = 4
        self.bit = bit

    def name(self, mnemonic):
        bit_str = f"_{self.bit}" if self.bit else ""
        return f"{mnemonic.lower()}{bit_str}_direct"

    def render(self, mnemonic, payload):
        header = inspect.cleandoc(
            f"""
            {self.declaration(mnemonic)}
            {{
                {trace_source()}
                struct CPU_State* const cpu = &state->cpu;

                if (cycle < 2 || cycle > {self.cycles}) {{ return {InstructionStatus.UnexpectedCycle}; }}

                switch (cycle) {{
                    case 2:
                        // direct offset
                        {read_pc_to("cpu->operands[0]")}
                        cpu->addr = direct_page(cpu, cpu->operands[0]);
                        return {InstructionStatus.Pending};
                    case 3:
                        // RMW read
                        {read_from_addr("cpu->data8[0]")}
                        return {InstructionStatus.Pending};
                    case 4: {{
                        // RMW modify
            """
        )

        footer = inspect.cleandoc(
            f"""
                        // RMW write
                        {write_to_addr("cpu->data8[0]")}
                        return {InstructionStatus.Done};
                    }}
                    default:
                        UNREACHABLE();
                }}
            }}
            """
        )

        return assemble_instruction(header, payload, footer, indent_depth=3)

    @classmethod
    def register_instructions(cls):
        add_instruction(
            0x0B,
            TemplateInstruction(
                "ASL",
                "ASL   d",
                cls(bit=None),
                do_asl(),
            ),
        )
        add_instruction(
            0x8B,
            TemplateInstruction(
                "DEC",
                "DEC   d",
                cls(bit=None),
                do_dec(),
            ),
        )
        add_instruction(
            0xAB,
            TemplateInstruction(
                "INC",
                "INC   d",
                cls(bit=None),
                do_inc(),
            ),
        )
        add_instruction(
            0x4B,
            TemplateInstruction(
                "LSR",
                "LSR   d",
                cls(bit=None),
                do_lsr(),
            ),
        )
        add_instruction(
            0x2B,
            TemplateInstruction(
                "ROL",
                "ROL   d",
                cls(bit=None),
                do_rol(),
            ),
        )
        add_instruction(
            0x6B,
            TemplateInstruction(
                "ROR",
                "ROR   d",
                cls(bit=None),
                do_ror(),
            ),
        )
        for bit in range(8):
            set1_op = 2 * bit * 16 + 2
            clr1_op = (2 * bit + 1) * 16 + 2
            add_instruction(
                set1_op,
                TemplateInstruction(
                    "SET1",
                    "SET1  d",
                    cls(bit),
                    do_set1(bit),
                ),
            )
            add_instruction(
                clr1_op,
                TemplateInstruction(
                    "CLR1",
                    "CLR1  d",
                    cls(bit),
                    do_clr1(bit),
                ),
            )


def generate_not1():
    """
    20b Direct (RMW) -- m.b
     (NOT1)
     (3 bytes)
     (5 cycles)
           1       PC      Op Code         1
           2       PC+1    AAL             1
           3       PC+2    AAH & BIT       1
           4       DO      Data (read)     1
           5       DO      Data (write)    0
       * Verified by blargg. 2 and 3 could be swapped, but that's unlikely.
    """
    add_instruction(
        0xEA,
        HardcodedInstruction(
            mnemonic="NOT1",
            _full_mnemonic=f"NOT1  m.b",
            function_name=f"not1",
            body=inspect.cleandoc(
                f"""
            {{
                {trace_source()}
                struct CPU_State* const cpu = &state->cpu;

                if (cycle < 2 || cycle > 5) {{ return {InstructionStatus.UnexpectedCycle}; }}

                switch (cycle) {{
                    case 2:
                        {read_pc_to("cpu->operands[0]")}
                        return {InstructionStatus.Pending};
                    case 3:
                        {read_pc_to("cpu->operands[1]")}
                        cpu->data16 = u16_read_little_endian(cpu->operands);
                        parse_membit(cpu->data16, &cpu->addr, &cpu->bit);
                        return {InstructionStatus.Pending};
                    case 4:
                        // RMW read
                        {read_from_addr("cpu->data8[0]")}
                        // RMW modify
                        bit_toggle(cpu->data8, cpu->bit);
                        return {InstructionStatus.Pending};
                    case 5:
                        // RMW write
                        {write_to_addr("cpu->data8[0]")}
                        return {InstructionStatus.Done};
                    default:
                        UNREACHABLE();
                }}
            }}
            """
            ),
        ),
    )


class DirectIndexed(AddressingMode):
    """
    21 Direct Indexed (RMW) -- d+X
     (ASL,DEC,INC,LSR,ROL,ROR)
     (2 bytes)
     (5 cycles)
           1       PC      Op Code         1
           2       PC+1    DO              1
           3       ??      IO              ?
           4       DO      Data (read)     1
           5       DO      Data (write)    0
       * blargg verified cycles 4 and 5.
       * 2 and 3 could be swapped, but that would be odd.
    """

    def __init__(self):
        super().__init__()
        self.cycles = 5

    def name(self, mnemonic):
        return f"{mnemonic.lower()}_direct_indexed"

    def render(self, mnemonic, payload):
        header = inspect.cleandoc(
            f"""
            {self.declaration(mnemonic)}
            {{
                {trace_source()}
                struct CPU_State* const cpu = &state->cpu;

                if (cycle < 2 || cycle > {self.cycles}) {{ return {InstructionStatus.UnexpectedCycle}; }}

                switch (cycle) {{
                    case 2:
                        // direct offset
                        {read_pc_to("cpu->operands[0]")}
                        return {InstructionStatus.Pending};
                    case 3:
                        // internal operation - dummy read from last latched addr
                        {idle_cycle()}
                        cpu->addr = direct_page(cpu, cpu->operands[0] + cpu->x);
                        return {InstructionStatus.Pending};
                    case 4:
                        // RMW read
                        {read_from_addr("cpu->data8[0]")}
                        return {InstructionStatus.Pending};
                    case 5: {{
                        // RMW modify
            """
        )

        footer = inspect.cleandoc(
            f"""
                        // RMW write
                        {write_to_addr("cpu->data8[0]")}
                        return {InstructionStatus.Done};
                    }}
                    default:
                        UNREACHABLE();
                }}
            }}
            """
        )

        return assemble_instruction(header, payload, footer, indent_depth=3)

    @classmethod
    def register_instructions(cls):
        add_instruction(
            0x1B,
            TemplateInstruction(
                "ASL",
                "ASL   d+X",
                cls(),
                do_asl(),
            ),
        )
        add_instruction(
            0x9B,
            TemplateInstruction(
                "DEC",
                "DEC   d+X",
                cls(),
                do_dec(),
            ),
        )
        add_instruction(
            0xBB,
            TemplateInstruction(
                "INC",
                "INC   d+X",
                cls(),
                do_inc(),
            ),
        )
        add_instruction(
            0x5B,
            TemplateInstruction(
                "LSR",
                "LSR   d+X",
                cls(),
                do_lsr(),
            ),
        )
        add_instruction(
            0x3B,
            TemplateInstruction(
                "ROL",
                "ROL   d+X",
                cls(),
                do_rol(),
            ),
        )
        add_instruction(
            0x7B,
            TemplateInstruction(
                "ROR",
                "ROR   d+X",
                cls(),
                do_ror(),
            ),
        )


class PswInstruction(Instruction):
    """
    a subset of  25 Implied
    CLRC, CLRP, CLRV, SETC, SETP, nothing else
    """

    def __init__(self, mnemonic):
        super().__init__(mnemonic)
        if mnemonic == "CLRC":
            self.flag = "carry"
            self.value = 0
        elif mnemonic == "CLRP":
            self.flag = "direct_page"
            self.value = 0
        elif mnemonic == "CLRV":
            self.flag = "overflow"
            self.value = 0
        elif mnemonic == "SETC":
            self.flag = "carry"
            self.value = 1
        elif mnemonic == "SETP":
            self.flag = "direct_page"
            self.value = 1
        else:
            raise ValueError(f"invalid PSW instruction: {mnemonic}")

    def name(self):
        return self.mnemonic.lower()

    def full_mnemonic(self):
        return self.mnemonic

    def body(self):
        execution = [f"    psw_write_{self.flag}(cpu, {self.value});"]
        if self.mnemonic == "CLRV":
            execution += ["    psw_write_half_carry(cpu, 0);"]

        return (
            inspect.cleandoc(
                f"""
            {{
                {trace_source()}
                struct CPU_State* const cpu = &state->cpu;

                if (cycle != 2) {{ return {InstructionStatus.UnexpectedCycle}; }}

                {dummy_read_pc()}
            """
            )
            + "\n"
            + "\n".join(execution)
            + "\n"
            + inspect.cleandoc(
                f"""
                return {InstructionStatus.Done};
            }}
            """
            )
        )

    def render(self):
        return f"{self.declaration()}\n{self.body()}"

    @classmethod
    def register_instructions(cls):
        add_instruction(
            0x60,
            cls("CLRC"),
        )
        add_instruction(
            0x20,
            cls("CLRP"),
        )
        add_instruction(
            0xE0,
            cls("CLRV"),
        )
        add_instruction(
            0x80,
            cls("SETC"),
        )
        add_instruction(
            0x40,
            cls("SETP"),
        )


class TCallInstruction(Instruction):
    """
    32c TCALL
     (TCALL)
     (1 byte)
     (8 cycles)
           1       PC      Op Code         1
           2       SP      PCH             0
           3       SP-1    PCL             0
           4       ??      IO              ?
           5       Vec     AAL             1
           6       Vec+1   AAH             1
           7       ??      IO              ?
           8       ??      IO              ?
          (1)      new PC  Op Code         1
       * WTF with all the IO cycles?
       * Order of reading new addr and pushing old addr may be wrong.
    """

    def __init__(self, n):
        super().__init__("TCALL")
        if n not in range(16):
            raise ValueError(f"{n} is not a nibble")
        self.n = n
        self.vector = 0xFFC0 + (15 - self.n) * 2

    def name(self):
        return f"tcall_{self.n}"

    def full_mnemonic(self):
        return f"TCALL {self.n}"

    @staticmethod
    def helper():
        return inspect.cleandoc(
            f"""
        static inline {InstructionStatus.Type} tcall_internal(struct SPC_State state[static 1], uint32_t cycle, uint16_t vector)
        {{
            {trace_source()}
            struct CPU_State* const cpu = &state->cpu;

            if (cycle < 2 || cycle > 8) {{ return {InstructionStatus.UnexpectedCycle}; }}

            switch (cycle) {{
                // cycle 2-3: cache the PC on the stack for later return
                case 2:
                    // effective stack address
                    cpu->addr = 0x100 + cpu->sp;
                    {write_to_addr("u16_msb(cpu->pc)")}
                    cpu->sp -= 1;
                    return {InstructionStatus.Pending};
                case 3:
                    cpu->addr = 0x100 + cpu->sp;
                    {write_to_addr("u16_lsb(cpu->pc)")}
                    cpu->sp -= 1;
                    return {InstructionStatus.Pending};
                case 4:
                    {idle_cycle()}
                    return {InstructionStatus.Pending};

                // cycle 5-6 fetch the address to go to at a predetermined address
                case 5:
                    cpu->addr = vector;
                    {read_from_addr("cpu->data8[0]")}
                    return {InstructionStatus.Pending};
                case 6:
                    cpu->addr = vector + 1;
                    {read_from_addr("cpu->data8[1]")}
                    // new pc (store in data16, not addr yet - next cycles are idle)
                    cpu->data16 = u16_read_little_endian(cpu->data8);
                    return {InstructionStatus.Pending};

                // cycle 7-8 are idle, we just publish the new pc at the end of cycle 8
                case 7:
                    {idle_cycle()}
                    return {InstructionStatus.Pending};
                case 8:
                    {idle_cycle()}
                    cpu->pc = cpu->data16;
                    return {InstructionStatus.Done};

                default:
                    UNREACHABLE();
            }}
        }}
        """
        )

    def body(self):
        return inspect.cleandoc(
            f"""
            {{
                {trace_source()}
                return tcall_internal(state, cycle, 0x{self.vector:x});
            }}
            """
        )

    def render(self):
        return f"{self.declaration()}\n{self.body()}"

    @classmethod
    def register_instructions(cls):
        register_helper(cls.helper())
        for i in range(16):
            opcode = 1 + 16 * i
            add_instruction(
                opcode,
                cls(i),
            )


RegisterDirectMode.register_instructions()
RegisterImmediateMode.register_instructions()
MovRegisterRegister.register_instructions()
RegisterDirectIndexedMode.register_instructions()
RegisterIndirectMode.register_instructions()
generate_register_indirect_incremented()
RegisterIndexedIndirectMode.register_instructions()
PswInstruction.register_instructions()
TCallInstruction.register_instructions()
RegisterIndirectIndexedMode.register_instructions()
RegisterAbsolute.register_instructions()
RegisterAbsoluteIndexed.register_instructions()
DirectImmediateMode.register_instructions()
DirectRegister.register_instructions()
generate_Anomie_13()
generate_indexed_indirect_register()
generate_indirect_indexed_register()
generate_absolute_register()
generate_absolute_indexed_register()
DirectDirect.register_instructions()
IndirectIndirect.register_instructions()
Direct.register_instructions()
generate_not1()
DirectIndexed.register_instructions()


def print_opcode_matrix():
    # ANSI Color Codes
    GREEN = "\033[92m"
    RED = "\033[91m"
    GRAY = "\033[90m"
    RESET = "\033[0m"
    BOLD = "\033[1m"

    # Header for columns
    col_header = "      " + "    ".join(f"{c:X}" for c in range(16))
    print(f"\n{BOLD}{col_header}{RESET}")
    print("    " + "—" * 65)

    missing_count = 0

    for row in range(16):
        # Row label (0x, 1x, etc)
        line_parts = [f"{BOLD} {row:X}x |{RESET}"]

        for col in range(16):
            opcode = (row << 4) | col
            hex_str = f"{opcode:02X}"  # Format as 00, 01, etc.

            if opcode in instructions:
                # Implemented: Green check + Hex
                line_parts.append(f"{GREEN}✅{hex_str}{RESET}")
            else:
                # Missing: Red cross + Hex
                line_parts.append(f"{RED}❌{hex_str}{RESET}")
                missing_count += 1

        print(" ".join(line_parts))

    # Summary Footer
    total = 256
    done = total - missing_count
    percent = (done / total) * 100

    print("    " + "—" * 65)
    print(
        f"{BOLD}Progress: {done}/{total} ({percent:.1f}%) | "
        f"{GREEN}Implemented: {done}{RESET} | {RED}Missing: {missing_count}{RESET}\n"
    )


C_IMPLEM = "instructions.gen.c"
HEADER = "instructions.gen.h"
TABLE = "instruction_table.gen.c"
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
            #include "instruction.h"
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
                f.write(f"/* {op:#04x}     {instr.full_mnemonic()} */\n")
                f.write(f"extern {instr.declaration()};\n")
            f.write("\n")  # sep. the columns


def make_implementation():
    with open(DIR + C_IMPLEM, "w") as f:
        f.write(
            inspect.cleandoc(
                f"""
            {trace_source()}

            #include "{HEADER}"

            #include "bus_io.h"
            #include "cpu.h"
            """
            )
        )
        f.write("\n\n")

        f.write("\n\n".join(helpers))

        f.write("\n\n")

        for lsb in range(16):
            for msb in range(16):
                op = lsb + msb * 16
                if op not in instructions:
                    continue
                instr = instructions[op]
                f.write(f"/* {op:#04x}     {instr.full_mnemonic()} */\n")
                f.write(f"{instr.render()}\n\n")
            f.write("\n")  # sep. the columns


def make_table():
    with open(DIR + TABLE, "w") as f:
        f.write(
            inspect.cleandoc(
                f"""
            {trace_source()}

            #include "{HEADER}"
            """
            )
        )
        f.write("\n\n")

        f.write("const struct Instruction opcode_lookup_table[256] = {\n")

        for opcode in range(256):
            if opcode in instructions:
                instr = instructions[opcode]
                f.write(f"    [{opcode:#04x}] = {{\n")
                f.write(f'        .mnemonic = "{instr.mnemonic}",\n')
                f.write(f'        .full_mnemonic = "{instr.full_mnemonic()}",\n')
                f.write(f"        .handler = {instr.name()},\n")
                f.write(f"        .length = {0},\n")
                f.write(f"        .cycles = {0},\n")
                f.write(f"    }},\n")
            else:
                f.write(f"    [{opcode:#04x}] = {{0}},\n")

        f.write("};\n")


def main():
    make_header()
    make_implementation()
    make_table()

    print_opcode_matrix()


if __name__ == "__main__":
    main()
