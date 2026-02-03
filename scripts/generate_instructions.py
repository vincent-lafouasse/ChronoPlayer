from enum import StrEnum, Enum
import inspect
import os


def trace_source():
    caller_frame = inspect.stack()[1]
    filename = os.path.basename(caller_frame.filename)
    line = caller_frame.lineno
    return f"/* generated from {filename}: l.{line} */"


# an array of static inline C functions to prepend before the instructions
helpers = []


def register_helper(function_block):
    helpers.append(function_block)


register_helper(
    inspect.cleandoc(
        f"""
    static inline void idle(struct SPC_State state[static 1])
    {{
        {trace_source()}
        (void)bus_read(state, state->cpu.pc);
    }}
    """
    )
)

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
    return "idle(state); // dummy read of PC, let's hope PC is not on a timer"


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
        return f"bool {self.name()}(struct SPC_State state[static 1], uint32_t cycle)"

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


def logic_op_payload(dest, op, data):
    return [trace_source(), f"{dest} {op}= {data};"] + check_zero_neg(dest)


def write_register(reg, data, is_16bit=False, updates_flags=True):
    lines = [trace_source(), f"cpu->{reg} = {data};"]
    if updates_flags:
        lines += check_zero_neg(f"cpu->{reg}", is_16bit)
    return lines


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
                assert(cycle == 2);
                {idle_cycle()}
                return true;
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
        allowed_registers = [Register.A, Register.X, Register.Y]
        if register not in allowed_registers:
            raise ValueError(f"Disallowed register for Register, Immediate: {register}")
        self.register = register

    def name(self, mnemonic):
        return f"{mnemonic.lower()}_register_immediate_{self.register}"

    def declaration(self, mnemonic):
        return f"bool {self.name(mnemonic)}(struct SPC_State state[static 1], uint32_t cycle)"

    def render(self, mnemonic, payload):
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
        # payload goes here
        footer = inspect.cleandoc(
            f"""
                return true;
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
                logic_op_payload("cpu->a", "|", "cpu->data8[0]"),
            ),
        )
        add_instruction(
            0x28,
            TemplateInstruction(
                "AND",
                "AND   A, #i",
                cls(Register.A),
                logic_op_payload("cpu->a", "&", "cpu->data8[0]"),
            ),
        )
        add_instruction(
            0x48,
            TemplateInstruction(
                "EOR",
                "EOR   A, #i",
                cls(Register.A),
                logic_op_payload("cpu->a", "^", "cpu->data8[0]"),
            ),
        )
        add_instruction(
            0x68,
            TemplateInstruction(
                "CMP",
                "CMP   A, #i",
                cls(Register.A),
                do_cmp_and_check_psw("cpu->a", "cpu->data8[0]"),
            ),
        )
        add_instruction(
            0x88,
            TemplateInstruction(
                "ADC",
                "ADC   A, #i",
                cls(Register.A),
                do_add8_and_check_psw("cpu->a", "cpu->data8[0]")
                + [trace_source(), "cpu->a = cpu->data8[0];"],
            ),
        )
        add_instruction(
            0xA8,
            TemplateInstruction(
                "SBC",
                "SBC   A, #i",
                cls(Register.A),
                do_sub8_and_check_psw("cpu->a", "cpu->data8[0]")
                + [trace_source(), "cpu->a = cpu->data8[0];"],
            ),
        )
        add_instruction(
            0xC8,
            TemplateInstruction(
                "CMP",
                "CMP   X, #i",
                cls(Register.X),
                do_cmp_and_check_psw("cpu->x", "cpu->data8[0]"),
            ),
        )
        add_instruction(
            0xE8,
            TemplateInstruction(
                "MOV",
                "MOV   A, #i",
                cls(Register.A),
                write_register(
                    "a", "cpu->data8[0]", is_16bit=False, updates_flags=True
                ),
            ),
        )
        add_instruction(
            0x8D,
            TemplateInstruction(
                "MOV",
                "MOV   Y, #i",
                cls(Register.Y),
                write_register(
                    "y", "cpu->data8[0]", is_16bit=False, updates_flags=True
                ),
            ),
        )
        add_instruction(
            0xAD,
            TemplateInstruction(
                "CMP",
                "CMP   Y, #i",
                cls(Register.Y),
                do_cmp_and_check_psw("cpu->y", "cpu->data8[0]"),
            ),
        )
        add_instruction(
            0xCD,
            TemplateInstruction(
                "MOV",
                "MOV   X, #i",
                cls(Register.X),
                write_register(
                    "x", "cpu->data8[0]", is_16bit=False, updates_flags=True
                ),
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

                assert(cycle == 2);
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
                return true;
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

    def name(self, mnemonic):
        return f"{mnemonic.lower()}_register_direct_{self.register}"

    def declaration(self, mnemonic):
        return f"bool {self.name(mnemonic)}(struct SPC_State state[static 1], uint32_t cycle)"

    def render(self, mnemonic, payload):
        header = inspect.cleandoc(
            f"""
            {self.declaration(mnemonic)}
            {{
                {trace_source()}
                struct CPU_State* const cpu = &state->cpu;

                assert(cycle == 2 || cycle == 3);

                switch (cycle) {{
                    case 2:
                        cpu->operands[0] = bus_read(state, cpu->pc++);
                        cpu->addr = direct_page(cpu, cpu->operands[0]);
                        return false;
                    case 3: {{
                        cpu->data8[0] = bus_read(state, cpu->addr);
            """
        )

        footer = inspect.cleandoc(
            f"""
                        return true;
                    }}
                    default:
                        /* unreachable */
                        /* true terminates the instruction just in case */
                        return true;
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
                logic_op_payload("cpu->a", "|", "cpu->data8[0]"),
            ),
        )
        add_instruction(
            0x24,
            TemplateInstruction(
                "AND",
                "AND   A, d",
                cls(Register.A),
                logic_op_payload("cpu->a", "&", "cpu->data8[0]"),
            ),
        )
        add_instruction(
            0x44,
            TemplateInstruction(
                "EOR",
                "EOR   A, d",
                cls(Register.A),
                logic_op_payload("cpu->a", "^", "cpu->data8[0]"),
            ),
        )
        add_instruction(
            0x64,
            TemplateInstruction(
                "CMP",
                "CMP   A, d",
                cls(Register.A),
                do_cmp_and_check_psw("cpu->a", "cpu->data8[0]"),
            ),
        )
        add_instruction(
            0x84,
            TemplateInstruction(
                "ADC",
                "ADC   A, d",
                cls(Register.A),
                do_add8_and_check_psw("cpu->a", "cpu->data8[0]")
                + [trace_source(), "cpu->a = cpu->data8[0];"],
            ),
        )
        add_instruction(
            0xA4,
            TemplateInstruction(
                "SBC",
                "SBC   A, d",
                cls(Register.A),
                do_sub8_and_check_psw("cpu->a", "cpu->data8[0]")
                + [trace_source(), "cpu->a = cpu->data8[0];"],
            ),
        )
        add_instruction(
            0x3E,
            TemplateInstruction(
                "CMP",
                "CMP   X, d",
                cls(Register.X),
                do_cmp_and_check_psw("cpu->x", "cpu->data8[0]"),
            ),
        )
        add_instruction(
            0xE4,
            TemplateInstruction(
                "MOV",
                "MOV   A, d",
                cls(Register.A),
                write_register(
                    "a", "cpu->data8[0]", is_16bit=False, updates_flags=True
                ),
            ),
        )
        add_instruction(
            0xEB,
            TemplateInstruction(
                "MOV",
                "MOV   Y, d",
                cls(Register.Y),
                write_register(
                    "y", "cpu->data8[0]", is_16bit=False, updates_flags=True
                ),
            ),
        )
        add_instruction(
            0xF8,
            TemplateInstruction(
                "MOV",
                "MOV   X, d",
                cls(Register.X),
                write_register(
                    "x", "cpu->data8[0]", is_16bit=False, updates_flags=True
                ),
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
        self.dst = dst
        self.src = src

    def name(self, mnemonic):
        return f"{mnemonic.lower()}_register_direct_indexed_{self.dst}_{self.src}"

    def declaration(self, mnemonic):
        return f"bool {self.name(mnemonic)}(struct SPC_State state[static 1], uint32_t cycle)"

    def render(self, mnemonic, payload):
        header = inspect.cleandoc(
            f"""
            {self.declaration(mnemonic)}
            {{
                {trace_source()}
                struct CPU_State* const cpu = &state->cpu;

                assert(cycle == 2 || cycle == 3 || cycle == 4);

                switch (cycle) {{
                    case 2:
                        cpu->operands[0] = bus_read(state, cpu->pc++);
                        // direct offset indexed by {self.src.name}
                        // wrapped within the direct page
                        cpu->data8[0] = (cpu->operands[0] + cpu->{self.src}) & 0xff;
                        cpu->addr = direct_page(cpu, cpu->data8[0]);
                        return false;
                    case 3:
                        {idle_cycle()}
                        return false;
                    case 4: {{
                        cpu->data8[0] = bus_read(state, cpu->addr);
            """
        )

        footer = inspect.cleandoc(
            f"""
                        return true;
                    }}
                    default:
                        /* unreachable */
                        /* true terminates the instruction just in case */
                        return true;
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
                do_add8_and_check_psw("cpu->a", "cpu->data8[0]")
                + [trace_source(), "cpu->a = cpu->data8[0];"],
            ),
        )
        add_instruction(
            0x34,
            TemplateInstruction(
                "AND",
                "AND   A, d+X",
                cls(Register.A, Register.X),
                logic_op_payload("cpu->a", "&", "cpu->data8[0]"),
            ),
        )
        add_instruction(
            0x74,
            TemplateInstruction(
                "CMP",
                "CMP   A, d+X",
                cls(Register.A, Register.X),
                do_cmp_and_check_psw("cpu->a", "cpu->data8[0]"),
            ),
        )
        add_instruction(
            0x54,
            TemplateInstruction(
                "EOR",
                "EOR   A, d+X",
                cls(Register.A, Register.X),
                logic_op_payload("cpu->a", "^", "cpu->data8[0]"),
            ),
        )
        add_instruction(
            0xF4,
            TemplateInstruction(
                "MOV",
                "MOV   A, d+X",
                cls(Register.A, Register.X),
                write_register(
                    "a", "cpu->data8[0]", is_16bit=False, updates_flags=True
                ),
            ),
        )
        add_instruction(
            0xF9,
            TemplateInstruction(
                "MOV",
                "MOV   X, d+Y",
                cls(Register.X, Register.Y),
                write_register(
                    "x", "cpu->data8[0]", is_16bit=False, updates_flags=True
                ),
            ),
        )
        add_instruction(
            0xFB,
            TemplateInstruction(
                "MOV",
                "MOV   Y, d+X",
                cls(Register.Y, Register.X),
                write_register(
                    "y", "cpu->data8[0]", is_16bit=False, updates_flags=True
                ),
            ),
        )
        add_instruction(
            0x14,
            TemplateInstruction(
                "OR",
                "OR    A, d+X",
                cls(Register.A, Register.X),
                logic_op_payload("cpu->a", "|", "cpu->data8[0]"),
            ),
        )
        add_instruction(
            0xB4,
            TemplateInstruction(
                "SBC",
                "SBC   A, d+X",
                cls(Register.A, Register.X),
                do_sub8_and_check_psw("cpu->a", "cpu->data8[0]")
                + [trace_source(), "cpu->a = cpu->data8[0];"],
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

    def name(self, mnemonic):
        return f"{mnemonic.lower()}_register_indirect"

    def declaration(self, mnemonic):
        return f"bool {self.name(mnemonic)}(struct SPC_State state[static 1], uint32_t cycle)"

    def render(self, mnemonic, payload):
        header = inspect.cleandoc(
            f"""
            {self.declaration(mnemonic)}
            {{
                {trace_source()}
                struct CPU_State* const cpu = &state->cpu;

                assert(cycle == 2 || cycle == 3);

                switch (cycle) {{
                    case 2:
                        // an idle cycle, lets calculate addr here since we can
                        cpu->addr = direct_page(cpu, cpu->x);
                        return false;
                    case 3: {{
                        cpu->data8[0] = bus_read(state, cpu->addr);
            """
        )

        footer = inspect.cleandoc(
            f"""
                        return true;
                    }}
                    default:
                        /* unreachable */
                        /* true terminates the instruction just in case */
                        return true;
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
                do_add8_and_check_psw("cpu->a", "cpu->data8[0]")
                + [trace_source(), "cpu->a = cpu->data8[0];"],
            ),
        )
        add_instruction(
            0x26,
            TemplateInstruction(
                "AND",
                "AND   A, (X)",
                cls(),
                logic_op_payload("cpu->a", "&", "cpu->data8[0]"),
            ),
        )
        add_instruction(
            0x66,
            TemplateInstruction(
                "CMP",
                "CMP   A, (X)",
                cls(),
                do_cmp_and_check_psw("cpu->a", "cpu->data8[0]"),
            ),
        )
        add_instruction(
            0x46,
            TemplateInstruction(
                "EOR",
                "EOR   A, (X)",
                cls(),
                logic_op_payload("cpu->a", "^", "cpu->data8[0]"),
            ),
        )
        add_instruction(
            0xE6,
            TemplateInstruction(
                "MOV",
                "MOV   A, (X)",
                cls(),
                write_register(
                    "a", "cpu->data8[0]", is_16bit=False, updates_flags=True
                ),
            ),
        )
        add_instruction(
            0x06,
            TemplateInstruction(
                "OR",
                "OR    A, (X)",
                cls(),
                logic_op_payload("cpu->a", "|", "cpu->data8[0]"),
            ),
        )
        add_instruction(
            0xA6,
            TemplateInstruction(
                "SBC",
                "SBC   A, (X)",
                cls(),
                do_sub8_and_check_psw("cpu->a", "cpu->data8[0]")
                + [trace_source(), "cpu->a = cpu->data8[0];"],
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

                    assert(cycle == 2 || cycle == 3 || cycle == 4);
                    switch (cycle) {{
                        case 2:
                            /* internal operation */
                            {idle_cycle()}
                            cpu->addr = direct_page(cpu, cpu->x);
                            return false;
                        case 3:
                            cpu->data8[0] = bus_read(state, cpu->addr);
                            cpu->a = cpu->data8[0];
                            psw_write_zero(cpu, cpu->a == 0);
                            psw_write_neg(cpu, cpu->a & 0x80);
                            /* we could increment X now but let's do it cycle 4 bc why not */
                            return false;
                        case 4:
                            /* internal operation */
                            {idle_cycle()}
                            cpu->x += 1;
                            return true;
                        default:
                            /* unreachable but true terminates the instruction just in case */
                            return true;
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

    def name(self, mnemonic):
        return f"{mnemonic.lower()}_register_indexed_indirect"

    def declaration(self, mnemonic):
        return f"bool {self.name(mnemonic)}(struct SPC_State state[static 1], uint32_t cycle)"

    def render(self, mnemonic, payload):
        header = inspect.cleandoc(
            f"""
            {self.declaration(mnemonic)}
            {{
                {trace_source()}
                struct CPU_State* const cpu = &state->cpu;

                assert(cycle >= 2 && cycle <= 6);

                switch (cycle) {{
                    case 2:
                        cpu->operands[0] = bus_read(state, cpu->pc++);
                        // &AAL on the direct page
                        cpu->data8[0] = cpu->operands[0] + cpu->x;
                        // &AAH on the direct page as well (wrapped to the 256B page)
                        cpu->data8[1] = cpu->data8[0] + 1;
                        return false;
                    case 3:
                        /* internal operation */
                        {idle_cycle()}
                        cpu->addr = direct_page(cpu, cpu->data8[0]);
                        return false;
                    case 4:
                        // first indirection
                        // AAL
                        cpu->data8[0] = bus_read(state, cpu->addr);
                        return false;
                    case 5:
                        // AAH
                        cpu->addr = direct_page(cpu, cpu->data8[1]);
                        cpu->data8[1] = bus_read(state, cpu->addr);
                        // assemble the absolute address
                        cpu->addr = u16_read_little_endian(cpu->data8);
                        return false;
                    case 6: {{
                        // second indirection
                        // operand is ready for ALU execution
                        cpu->data8[0] = bus_read(state, cpu->addr);
            """
        )

        footer = inspect.cleandoc(
            f"""
                        return true;
                    }}
                    default:
                        /* unreachable */
                        /* true terminates the instruction just in case */
                        return true;
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
                do_add8_and_check_psw("cpu->a", "cpu->data8[0]")
                + [trace_source(), "cpu->a = cpu->data8[0];"],
            ),
        )
        add_instruction(
            0x27,
            TemplateInstruction(
                "AND",
                "AND   A, [d+X]",
                cls(),
                logic_op_payload("cpu->a", "&", "cpu->data8[0]"),
            ),
        )
        add_instruction(
            0x67,
            TemplateInstruction(
                "CMP",
                "CMP   A, [d+X]",
                cls(),
                do_cmp_and_check_psw("cpu->a", "cpu->data8[0]"),
            ),
        )
        add_instruction(
            0x47,
            TemplateInstruction(
                "EOR",
                "EOR   A, [d+X]",
                cls(),
                logic_op_payload("cpu->a", "^", "cpu->data8[0]"),
            ),
        )
        add_instruction(
            0xE7,
            TemplateInstruction(
                "MOV",
                "MOV   A, [d+X]",
                cls(),
                write_register(
                    "a", "cpu->data8[0]", is_16bit=False, updates_flags=True
                ),
            ),
        )
        add_instruction(
            0x07,
            TemplateInstruction(
                "OR",
                "OR    A, [d+X]",
                cls(),
                logic_op_payload("cpu->a", "|", "cpu->data8[0]"),
            ),
        )
        add_instruction(
            0xA7,
            TemplateInstruction(
                "SBC",
                "SBC   A, [d+X]",
                cls(),
                do_sub8_and_check_psw("cpu->a", "cpu->data8[0]")
                + [trace_source(), "cpu->a = cpu->data8[0];"],
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

    def name(self, mnemonic):
        return f"{mnemonic.lower()}_register_indirect_indexed"

    def declaration(self, mnemonic):
        return f"bool {self.name(mnemonic)}(struct SPC_State state[static 1], uint32_t cycle)"

    def render(self, mnemonic, payload):
        header = inspect.cleandoc(
            f"""
            {self.declaration(mnemonic)}
            {{
                {trace_source()}
                struct CPU_State* const cpu = &state->cpu;

                assert(cycle >= 2 && cycle <= 6);

                switch (cycle) {{
                    case 2:
                        cpu->operands[0] = bus_read(state, cpu->pc++);
                        cpu->addr = direct_page(cpu, cpu->operands[0]);
                        return false;
                    case 3:
                        // AAL
                        cpu->data8[0] = bus_read(state, cpu->addr);
                        cpu->addr = direct_page(cpu, cpu->operands[0] + 1);
                        return false;
                    case 4:
                        // AAH
                        cpu->data8[1] = bus_read(state, cpu->addr);
                        // AA
                        cpu->addr = u16_read_little_endian(cpu->data8);
                        return false;
                    case 5:
                        {idle_cycle()}
                        cpu->addr += cpu->y;
                        return false;
                    case 6: {{
                        // data is ready to hit the ALU
                        cpu->data8[0] = bus_read(state, cpu->addr);
            """
        )

        footer = inspect.cleandoc(
            f"""
                        return true;
                    }}
                    default:
                        /* unreachable */
                        /* true terminates the instruction just in case */
                        return true;
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
                do_add8_and_check_psw("cpu->a", "cpu->data8[0]")
                + [trace_source(), "cpu->a = cpu->data8[0];"],
            ),
        )
        add_instruction(
            0x37,
            TemplateInstruction(
                "AND",
                "AND   A, [d]+Y",
                cls(),
                logic_op_payload("cpu->a", "&", "cpu->data8[0]"),
            ),
        )
        add_instruction(
            0x77,
            TemplateInstruction(
                "CMP",
                "CMP   A, [d]+Y",
                cls(),
                do_cmp_and_check_psw("cpu->a", "cpu->data8[0]"),
            ),
        )
        add_instruction(
            0x57,
            TemplateInstruction(
                "EOR",
                "EOR   A, [d]+Y",
                cls(),
                logic_op_payload("cpu->a", "^", "cpu->data8[0]"),
            ),
        )
        add_instruction(
            0xF7,
            TemplateInstruction(
                "MOV",
                "MOV   A, [d]+Y",
                cls(),
                write_register(
                    "a", "cpu->data8[0]", is_16bit=False, updates_flags=True
                ),
            ),
        )
        add_instruction(
            0x17,
            TemplateInstruction(
                "OR",
                "OR    A, [d]+Y",
                cls(),
                logic_op_payload("cpu->a", "|", "cpu->data8[0]"),
            ),
        )
        add_instruction(
            0xB7,
            TemplateInstruction(
                "SBC",
                "SBC   A, [d]+Y",
                cls(),
                do_sub8_and_check_psw("cpu->a", "cpu->data8[0]")
                + [trace_source(), "cpu->a = cpu->data8[0];"],
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
        self.reg = reg

    def name(self, mnemonic):
        return f"{mnemonic.lower()}_register_absolute_{self.reg}"

    def declaration(self, mnemonic):
        return f"bool {self.name(mnemonic)}(struct SPC_State state[static 1], uint32_t cycle)"

    def render(self, mnemonic, payload):
        header = inspect.cleandoc(
            f"""
            {self.declaration(mnemonic)}
            {{
                {trace_source()}
                struct CPU_State* const cpu = &state->cpu;

                assert(cycle >= 2 && cycle <= 4);

                switch (cycle) {{
                    case 2:
                        // AAL
                        cpu->operands[0] = bus_read(state, cpu->pc++);
                        return false;
                    case 3:
                        // AAH
                        cpu->operands[1] = bus_read(state, cpu->pc++);
                        // full absolute address
                        cpu->addr = u16_parse(cpu->operands[0], cpu->operands[1]);
                        return false;
                    case 4: {{
                        // data is ready to hit the ALU
                        cpu->data8[0] = bus_read(state, cpu->addr);
            """
        )

        footer = inspect.cleandoc(
            f"""
                        return true;
                    }}
                    default:
                        /* unreachable */
                        /* true terminates the instruction just in case */
                        return true;
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
                do_add8_and_check_psw("cpu->a", "cpu->data8[0]")
                + [trace_source(), "cpu->a = cpu->data8[0];"],
            ),
        )
        add_instruction(
            0x25,
            TemplateInstruction(
                "AND",
                "AND   A, !a",
                cls(Register.A),
                logic_op_payload("cpu->a", "&", "cpu->data8[0]"),
            ),
        )
        add_instruction(
            0x65,
            TemplateInstruction(
                "CMP",
                "CMP   A, !a",
                cls(Register.A),
                do_cmp_and_check_psw("cpu->a", "cpu->data8[0]"),
            ),
        )
        add_instruction(
            0x1E,
            TemplateInstruction(
                "CMP",
                "CMP   X, !a",
                cls(Register.X),
                do_cmp_and_check_psw("cpu->x", "cpu->data8[0]"),
            ),
        )
        add_instruction(
            0x5E,
            TemplateInstruction(
                "CMP",
                "CMP   Y, !a",
                cls(Register.Y),
                do_cmp_and_check_psw("cpu->y", "cpu->data8[0]"),
            ),
        )
        add_instruction(
            0x45,
            TemplateInstruction(
                "EOR",
                "EOR   A, !a",
                cls(Register.A),
                logic_op_payload("cpu->a", "^", "cpu->data8[0]"),
            ),
        )
        add_instruction(
            0xE5,
            TemplateInstruction(
                "MOV",
                "MOV   A, !a",
                cls(Register.A),
                write_register(
                    "a", "cpu->data8[0]", is_16bit=False, updates_flags=True
                ),
            ),
        )
        add_instruction(
            0xE9,
            TemplateInstruction(
                "MOV",
                "MOV   X, !a",
                cls(Register.X),
                write_register(
                    "x", "cpu->data8[0]", is_16bit=False, updates_flags=True
                ),
            ),
        )
        add_instruction(
            0xEC,
            TemplateInstruction(
                "MOV",
                "MOV   Y, !a",
                cls(Register.Y),
                write_register(
                    "y", "cpu->data8[0]", is_16bit=False, updates_flags=True
                ),
            ),
        )
        add_instruction(
            0x05,
            TemplateInstruction(
                "OR",
                "OR    A, !a",
                cls(Register.A),
                logic_op_payload("cpu->a", "|", "cpu->data8[0]"),
            ),
        )
        add_instruction(
            0xA5,
            TemplateInstruction(
                "SBC",
                "SBC   A, !a",
                cls(Register.A),
                do_sub8_and_check_psw("cpu->a", "cpu->data8[0]")
                + [trace_source(), "cpu->a = cpu->data8[0];"],
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
        self.reg = reg

    def name(self, mnemonic):
        return f"{mnemonic.lower()}_register_absolute_indexed_{self.reg}"

    def declaration(self, mnemonic):
        return f"bool {self.name(mnemonic)}(struct SPC_State state[static 1], uint32_t cycle)"

    def render(self, mnemonic, payload):
        header = inspect.cleandoc(
            f"""
            {self.declaration(mnemonic)}
            {{
                {trace_source()}
                struct CPU_State* const cpu = &state->cpu;

                assert(cycle >= 2 && cycle <= 5);

                switch (cycle) {{
                    case 2:
                        // AAL
                        cpu->operands[0] = bus_read(state, cpu->pc++);
                        return false;
                    case 3:
                        // AAH
                        cpu->operands[1] = bus_read(state, cpu->pc++);
                        // full absolute address
                        cpu->addr = u16_parse(cpu->operands[0], cpu->operands[1]);
                        return false;
                    case 4:
                        {idle_cycle()}
                        // let's index AA now bc why not
                        cpu->addr += cpu->{self.reg};
                        return false;
                    case 5: {{
                        // data is ready to hit the ALU
                        cpu->data8[0] = bus_read(state, cpu->addr);
            """
        )

        footer = inspect.cleandoc(
            f"""
                        return true;
                    }}
                    default:
                        /* unreachable */
                        /* true terminates the instruction just in case */
                        return true;
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
                do_add8_and_check_psw("cpu->a", "cpu->data8[0]")
                + [trace_source(), "cpu->a = cpu->data8[0];"],
            ),
        )
        add_instruction(
            0x96,
            TemplateInstruction(
                "ADC",
                "ADC   A, !a+Y",
                cls(Register.Y),
                do_add8_and_check_psw("cpu->a", "cpu->data8[0]")
                + [trace_source(), "cpu->a = cpu->data8[0];"],
            ),
        )
        add_instruction(
            0x35,
            TemplateInstruction(
                "AND",
                "AND   A, !a+X",
                cls(Register.X),
                logic_op_payload("cpu->a", "&", "cpu->data8[0]"),
            ),
        )
        add_instruction(
            0x36,
            TemplateInstruction(
                "AND",
                "AND   A, !a+Y",
                cls(Register.Y),
                logic_op_payload("cpu->a", "&", "cpu->data8[0]"),
            ),
        )
        add_instruction(
            0x75,
            TemplateInstruction(
                "CMP",
                "CMP   A, !a+X",
                cls(Register.X),
                do_cmp_and_check_psw("cpu->a", "cpu->data8[0]"),
            ),
        )
        add_instruction(
            0x76,
            TemplateInstruction(
                "CMP",
                "CMP   A, !a+Y",
                cls(Register.Y),
                do_cmp_and_check_psw("cpu->a", "cpu->data8[0]"),
            ),
        )
        add_instruction(
            0x55,
            TemplateInstruction(
                "EOR",
                "EOR   A, !a+X",
                cls(Register.X),
                logic_op_payload("cpu->a", "^", "cpu->data8[0]"),
            ),
        )
        add_instruction(
            0x56,
            TemplateInstruction(
                "EOR",
                "EOR   A, !a+Y",
                cls(Register.Y),
                logic_op_payload("cpu->a", "^", "cpu->data8[0]"),
            ),
        )
        add_instruction(
            0xF5,
            TemplateInstruction(
                "MOV",
                "MOV   A, !a+X",
                cls(Register.X),
                write_register(
                    "a", "cpu->data8[0]", is_16bit=False, updates_flags=True
                ),
            ),
        )
        add_instruction(
            0xF6,
            TemplateInstruction(
                "MOV",
                "MOV   A, !a+Y",
                cls(Register.Y),
                write_register(
                    "a", "cpu->data8[0]", is_16bit=False, updates_flags=True
                ),
            ),
        )
        add_instruction(
            0x15,
            TemplateInstruction(
                "OR",
                "OR    A, !a+X",
                cls(Register.X),
                logic_op_payload("cpu->a", "|", "cpu->data8[0]"),
            ),
        )
        add_instruction(
            0x16,
            TemplateInstruction(
                "OR",
                "OR    A, !a+Y",
                cls(Register.Y),
                logic_op_payload("cpu->a", "|", "cpu->data8[0]"),
            ),
        )
        add_instruction(
            0xB5,
            TemplateInstruction(
                "SBC",
                "SBC   A, !a+X",
                cls(Register.X),
                do_sub8_and_check_psw("cpu->a", "cpu->data8[0]")
                + [trace_source(), "cpu->a = cpu->data8[0];"],
            ),
        )
        add_instruction(
            0xB6,
            TemplateInstruction(
                "SBC",
                "SBC   A, !a+Y",
                cls(Register.Y),
                do_sub8_and_check_psw("cpu->a", "cpu->data8[0]")
                + [trace_source(), "cpu->a = cpu->data8[0];"],
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

    def name(self, mnemonic):
        return f"{mnemonic.lower()}_direct_immediate"

    def declaration(self, mnemonic):
        return f"bool {self.name(mnemonic)}(struct SPC_State state[static 1], uint32_t cycle)"

    def render(self, mnemonic, payload):
        header = inspect.cleandoc(
            f"""
            {self.declaration(mnemonic)}
            {{
                {trace_source()}
                struct CPU_State* const cpu = &state->cpu;

                assert(cycle >= 2 && cycle <= 5);

                switch (cycle) {{
                    case 2:
                        // #i
                        cpu->operands[0] = bus_read(state, cpu->pc++);
                        cpu->data8[1] = cpu->operands[0];
                        return false;
                    case 3:
                        // direct page
                        cpu->operands[1] = bus_read(state, cpu->pc++);
                        cpu->addr = direct_page(cpu, cpu->operands[1]);
                        return false;
                    case 4:
                        // data
                        cpu->data8[0] = bus_read(state, cpu->addr);
                        return false;
                    case 5: {{
            """
        )

        footer = inspect.cleandoc(
            f"""
                        return true;
                    }}
                    default:
                        /* unreachable */
                        /* true terminates the instruction just in case */
                        return true;
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
                do_add8_and_check_psw("cpu->data8[0]", "cpu->data8[1]")
                + [trace_source(), "bus_write(state, cpu->addr, cpu->data8[0]);"],
            ),
        )
        add_instruction(
            0x38,
            TemplateInstruction(
                "AND",
                "AND   d, #i",
                cls(),
                logic_op_payload("cpu->data8[0]", "&", "cpu->data8[1]")
                + [trace_source(), "bus_write(state, cpu->addr, cpu->data8[0]);"],
            ),
        )
        add_instruction(
            0x78,
            TemplateInstruction(
                "CMP",
                "CMP   d, #i",
                cls(),
                do_cmp_and_check_psw("cpu->data8[0]", "cpu->data8[1]"),
            ),
        )
        add_instruction(
            0x58,
            TemplateInstruction(
                "EOR",
                "EOR   d, #i",
                cls(),
                logic_op_payload("cpu->data8[0]", "^", "cpu->data8[1]")
                + [trace_source(), "bus_write(state, cpu->addr, cpu->data8[0]);"],
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
                logic_op_payload("cpu->data8[0]", "|", "cpu->data8[1]")
                + [trace_source(), "bus_write(state, cpu->addr, cpu->data8[0]);"],
            ),
        )
        add_instruction(
            0xB8,
            TemplateInstruction(
                "SBC",
                "SBC   d, #i",
                cls(),
                do_sub8_and_check_psw("cpu->data8[0]", "cpu->data8[1]")
                + [trace_source(), "bus_write(state, cpu->addr, cpu->data8[0]);"],
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
        self.reg = reg

    def name(self, mnemonic):
        return f"{mnemonic.lower()}_direct_register_{self.reg}"

    def declaration(self, mnemonic):
        return f"bool {self.name(mnemonic)}(struct SPC_State state[static 1], uint32_t cycle)"

    def render(self, mnemonic, payload):
        header = inspect.cleandoc(
            f"""
            {self.declaration(mnemonic)}
            {{
                {trace_source()}
                struct CPU_State* const cpu = &state->cpu;

                assert(cycle >= 2 && cycle <= 4);

                switch (cycle) {{
                    case 2:
                        cpu->operands[0] = bus_read(state, cpu->pc++);
                        cpu->addr = direct_page(cpu, cpu->operands[0]);
                        return false;
                    case 3:
                        // "useless" read in RMW mov
                        cpu->data8[0] = bus_read(state, cpu->addr);
                        return false;
                    case 4: {{
            """
        )

        footer = inspect.cleandoc(
            f"""
                        return true;
                    }}
                    default:
                        /* unreachable */
                        /* true terminates the instruction just in case */
                        return true;
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

                    assert(cycle >= 2 && cycle <= 4);
                    switch (cycle) {{
                        case 2:
                            /* internal operation */
                            {idle_cycle()}
                            cpu->addr = direct_page(cpu, cpu->x);
                            return false;
                        case 3:
                            // "useless" read for RMW MOV
                            (void)bus_read(state, cpu->addr);
                            return false;
                        case 4:
                            bus_write(state, cpu->addr, cpu->a);
                            return true;
                        default:
                            /* unreachable but true terminates the instruction just in case */
                            return true;
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

                    assert(cycle >= 2 && cycle <= 4);
                    switch (cycle) {{
                        case 2:
                            /* internal operation */
                            {idle_cycle()}
                            cpu->addr = direct_page(cpu, cpu->x++);
                            return false;
                        case 3:
                            /* internal operation */
                            {idle_cycle()}
                            return false;
                        case 4:
                            bus_write(state, cpu->addr, cpu->a);
                            return true;
                        default:
                            /* unreachable but true terminates the instruction just in case */
                            return true;
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

                assert(cycle >= 2 && cycle <= 7);
                switch (cycle) {{
                    case 2:
                        cpu->operands[0] = bus_read(state, cpu->pc++);
                        cpu->data8[0] = cpu->operands[0] + cpu->x;
                        return false;
                    case 3:
                        /* internal operation */
                        {idle_cycle()}
                        return false;
                    case 4:
                        // AAL
                        cpu->addr = direct_page(cpu, cpu->data8[0]);
                        cpu->data8[1] = bus_read(state, cpu->addr);
                        return false;
                    case 5:
                        // AAH
                        cpu->addr = direct_page(cpu, cpu->data8[0] + 1);
                        cpu->data8[0] = bus_read(state, cpu->addr);
                        cpu->addr = u16_read_big_endian(cpu->data8);
                        return false;
                    case 6:
                        // "useless" RMW read
                        (void)bus_read(state, cpu->addr);
                        return false;
                    case 7:
                        bus_write(state, cpu->addr, cpu->a);
                        return true;
                    default:
                        /* unreachable but true terminates the instruction just in case */
                        return true;
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

                assert(cycle >= 2 && cycle <= 7);
                switch (cycle) {{
                    case 2:
                        cpu->operands[0] = bus_read(state, cpu->pc++);
                        return false;
                    case 3:
                        // AAL
                        cpu->addr = direct_page(cpu, cpu->operands[0]);
                        cpu->data8[0] = bus_read(state, cpu->addr);
                        return false;
                    case 4:
                        // AAL
                        cpu->addr = direct_page(cpu, cpu->operands[0] + 1);
                        cpu->data8[1] = bus_read(state, cpu->addr);
                        cpu->addr = u16_read_little_endian(cpu->data8);
                        cpu->addr += cpu->y;
                        return false;
                    case 5:
                        // internal operations
                        {idle_cycle()}
                        return false;
                    case 6:
                        // "useless" RMW read
                        (void)bus_read(state, cpu->addr);
                        return false;
                    case 7:
                        bus_write(state, cpu->addr, cpu->a);
                        return true;
                    default:
                        /* unreachable but true terminates the instruction just in case */
                        return true;
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

                    assert(cycle >= 2 && cycle <= 5);
                    switch (cycle) {{
                        case 2:
                            cpu->operands[0] = bus_read(state, cpu->pc++);
                            // AAL
                            cpu->data8[0] = cpu->operands[0];
                            return false;
                        case 3:
                            cpu->operands[1] = bus_read(state, cpu->pc++);
                            // AAH
                            cpu->data8[1] = cpu->operands[1];
                            cpu->addr = u16_read_little_endian(cpu->data8);
                            return false;
                        case 4:
                            // "useless" RMW read
                            (void)bus_read(state, cpu->addr);
                            return false;
                        case 5:
                            bus_write(state, cpu->addr, cpu->{reg});
                            return true;
                        default:
                            /* unreachable but true terminates the instruction just in case */
                            return true;
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

                    assert(cycle >= 2 && cycle <= 6);
                    switch (cycle) {{
                        case 2:
                            // AAL
                            cpu->operands[0] = bus_read(state, cpu->pc++);
                            cpu->data8[0] = cpu->operands[0];
                            return false;
                        case 3:
                            // AAH
                            cpu->operands[1] = bus_read(state, cpu->pc++);
                            cpu->data8[1] = cpu->operands[1];
                            // AA + {reg}
                            cpu->addr = u16_read_little_endian(cpu->data8);
                            cpu->addr += cpu->{reg};
                            return false;
                        case 4:
                            // internal operation
                            {idle_cycle()}
                            return false;
                        case 5:
                            // "useless" RMW read for MOV
                            (void)bus_read(state, cpu->addr);
                            return false;
                        case 6:
                            bus_write(state, cpu->addr, cpu->a);
                            return true;
                        default:
                            /* unreachable but true terminates the instruction just in case */
                            return true;
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

    def name(self, mnemonic):
        if mnemonic == "MOV":
            raise ValueError("Direct direct mov will be implemented as a special case")
        return f"{mnemonic.lower()}_direct_direct"

    def declaration(self, mnemonic):
        return f"bool {self.name(mnemonic)}(struct SPC_State state[static 1], uint32_t cycle)"

    def render(self, mnemonic, payload):
        header = inspect.cleandoc(
            f"""
            {self.declaration(mnemonic)}
            {{
                {trace_source()}
                struct CPU_State* const cpu = &state->cpu;

                assert(cycle >= 2 && cycle <= 6);

                switch (cycle) {{
                    case 2:
                        // DS - source address
                        cpu->operands[0] = bus_read(state, cpu->pc++);
                        cpu->addr = direct_page(cpu, cpu->operands[0]);
                        return false;
                    case 3:
                        // Read data from source
                        cpu->data8[1] = bus_read(state, cpu->addr);
                        return false;
                    case 4:
                        // DD - destination address
                        cpu->operands[1] = bus_read(state, cpu->pc++);
                        cpu->addr = direct_page(cpu, cpu->operands[1]);
                        return false;
                    case 5:
                        // Read data from dest
                        cpu->data8[0] = bus_read(state, cpu->addr);
                        return false;
                    case 6: {{
            """
        )

        footer = inspect.cleandoc(
            f"""
                        return true;
                    }}
                    default:
                        /* unreachable */
                        /* true terminates the instruction just in case */
                        return true;
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
                do_add8_and_check_psw("cpu->data8[0]", "cpu->data8[1]")
                + [trace_source(), "bus_write(state, cpu->addr, cpu->data8[0]);"],
            ),
        )
        add_instruction(
            0x29,
            TemplateInstruction(
                "AND",
                "AND   dd, ds",
                cls(),
                logic_op_payload("cpu->data8[0]", "&", "cpu->data8[1]")
                + [trace_source(), "bus_write(state, cpu->addr, cpu->data8[0]);"],
            ),
        )
        add_instruction(
            0x69,
            TemplateInstruction(
                "CMP",
                "CMP   dd, ds",
                cls(),
                do_cmp_and_check_psw("cpu->data8[0]", "cpu->data8[1]"),
            ),
        )
        add_instruction(
            0x49,
            TemplateInstruction(
                "EOR",
                "EOR   dd, ds",
                cls(),
                logic_op_payload("cpu->data8[0]", "^", "cpu->data8[1]")
                + [trace_source(), "bus_write(state, cpu->addr, cpu->data8[0]);"],
            ),
        )
        add_instruction(
            0x09,
            TemplateInstruction(
                "OR",
                "OR    dd, ds",
                cls(),
                logic_op_payload("cpu->data8[0]", "|", "cpu->data8[1]")
                + [trace_source(), "bus_write(state, cpu->addr, cpu->data8[0]);"],
            ),
        )
        add_instruction(
            0xA9,
            TemplateInstruction(
                "SBC",
                "SBC   dd, ds",
                cls(),
                do_sub8_and_check_psw("cpu->data8[0]", "cpu->data8[1]")
                + [trace_source(), "bus_write(state, cpu->addr, cpu->data8[0]);"],
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

                    assert(cycle >= 2 && cycle <= 5);

                    switch (cycle) {{
                        case 2:
                            // DS - source address
                            cpu->operands[0] = bus_read(state, cpu->pc++);
                            cpu->addr = direct_page(cpu, cpu->operands[0]);
                            return false;
                        case 3:
                            // Read data from source
                            cpu->data8[0] = bus_read(state, cpu->addr);
                            return false;
                        case 4:
                            // DD - destination address
                            cpu->operands[1] = bus_read(state, cpu->pc++);
                            cpu->addr = direct_page(cpu, cpu->operands[1]);
                            return false;
                        case 5:
                            // no RMW read
                            bus_write(state, cpu->addr, cpu->data8[0]);
                            return true;
                        default:
                            /* unreachable */
                            /* true terminates the instruction just in case */
                            return true;
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

    def name(self, mnemonic):
        return f"{mnemonic.lower()}_indirect_indirect"

    def declaration(self, mnemonic):
        return f"bool {self.name(mnemonic)}(struct SPC_State state[static 1], uint32_t cycle)"

    def render(self, mnemonic, payload):
        header = inspect.cleandoc(
            f"""
            {self.declaration(mnemonic)}
            {{
                {trace_source()}
                struct CPU_State* const cpu = &state->cpu;

                assert(cycle >= 2 && cycle <= 5);

                switch (cycle) {{
                    case 2:
                        // internal operation
                        {idle_cycle()}
                        return false;
                    case 3:
                        // src: (Y)
                        cpu->addr = direct_page(cpu, cpu->y);
                        cpu->data8[1] = bus_read(state, cpu->addr);
                        return false;
                    case 4:
                        // dst: (X)
                        cpu->addr = direct_page(cpu, cpu->x);
                        cpu->data8[0] = bus_read(state, cpu->addr);
                        return false;
                    case 5: {{
            """
        )

        footer = inspect.cleandoc(
            f"""
                        return true;
                    }}
                    default:
                        /* unreachable */
                        /* true terminates the instruction just in case */
                        return true;
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
                do_add8_and_check_psw("cpu->data8[0]", "cpu->data8[1]")
                + [trace_source(), "bus_write(state, cpu->addr, cpu->data8[0]);"],
            ),
        )
        add_instruction(
            0x39,
            TemplateInstruction(
                "AND",
                "AND   (X), (Y)",
                cls(),
                logic_op_payload("cpu->data8[0]", "&", "cpu->data8[1]")
                + [trace_source(), "bus_write(state, cpu->addr, cpu->data8[0]);"],
            ),
        )
        add_instruction(
            0x79,
            TemplateInstruction(
                "CMP",
                "CMP   (X), (Y)",
                cls(),
                do_cmp_and_check_psw("cpu->data8[0]", "cpu->data8[1]"),
            ),
        )
        add_instruction(
            0x59,
            TemplateInstruction(
                "EOR",
                "EOR   (X), (Y)",
                cls(),
                logic_op_payload("cpu->data8[0]", "^", "cpu->data8[1]")
                + [trace_source(), "bus_write(state, cpu->addr, cpu->data8[0]);"],
            ),
        )
        add_instruction(
            0x19,
            TemplateInstruction(
                "OR",
                "OR    (X), (Y)",
                cls(),
                logic_op_payload("cpu->data8[0]", "|", "cpu->data8[1]")
                + [trace_source(), "bus_write(state, cpu->addr, cpu->data8[0]);"],
            ),
        )
        add_instruction(
            0xB9,
            TemplateInstruction(
                "SBC",
                "SBC   (X), (Y)",
                cls(),
                do_sub8_and_check_psw("cpu->data8[0]", "cpu->data8[1]")
                + [trace_source(), "bus_write(state, cpu->addr, cpu->data8[0]);"],
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
        self.bit = bit

    def name(self, mnemonic):
        bit_str = f"_{self.bit}" if self.bit else ""
        return f"{mnemonic.lower()}{bit_str}_direct"

    def declaration(self, mnemonic):
        return f"bool {self.name(mnemonic)}(struct SPC_State state[static 1], uint32_t cycle)"

    def render(self, mnemonic, payload):
        header = inspect.cleandoc(
            f"""
            {self.declaration(mnemonic)}
            {{
                {trace_source()}
                struct CPU_State* const cpu = &state->cpu;

                assert(cycle >= 2 && cycle <= 4);

                switch (cycle) {{
                    case 2:
                        // direct offset
                        cpu->operands[0] = bus_read(state, cpu->pc++);
                        cpu->addr = direct_page(cpu, cpu->operands[0]);
                        return false;
                    case 3:
                        // RMW read
                        cpu->data8[0] = bus_read(state, cpu->addr);
                        return false;
                    case 4: {{
                        // RMW modify
            """
        )

        footer = inspect.cleandoc(
            f"""
                        // RMW write
                        bus_write(state, cpu->addr, cpu->data8[0]);
                        return true;
                    }}
                    default:
                        /* unreachable */
                        /* true terminates the instruction just in case */
                        return true;
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

    def declaration(self):
        return f"bool {self.name()}(struct SPC_State state[static 1], uint32_t cycle)"

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

                assert(cycle == 2);
                {idle_cycle()}
            """
            )
            + "\n"
            + "\n".join(execution)
            + "\n"
            + inspect.cleandoc(
                f"""
                return true;
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
        static inline bool tcall_internal(struct SPC_State state[static 1], uint32_t cycle, uint16_t vector)
        {{
            {trace_source()}
            struct CPU_State* const cpu = &state->cpu;

            assert(cycle >= 2 && cycle <= 8);
            switch (cycle) {{
                // cycle 2-3: cache the PC on the stack for later return
                case 2:
                    // effective stack address
                    cpu->addr = 0x100 + cpu->sp;
                    bus_write(state, cpu->addr, u16_msb(cpu->pc));
                    cpu->sp -= 1;
                    return false;
                case 3:
                    cpu->addr = 0x100 + cpu->sp;
                    bus_write(state, cpu->addr, u16_lsb(cpu->pc));
                    cpu->sp -= 1;
                    return false;
                case 4:
                    {idle_cycle()}
                    return false;

                // cycle 5-6 fetch the address to go to at a predetermined address
                case 5:
                    cpu->data8[0] = bus_read(state, vector);
                    return false;
                case 6:
                    cpu->data8[1] = bus_read(state, vector + 1);
                    // new pc
                    cpu->addr = u16_read_little_endian(cpu->data8);
                    return false;

                // cycle 7-8 are idle, we just publish the new pc at the end of cycle 8
                case 7:
                    {idle_cycle()}
                    return false;
                case 8:
                    {idle_cycle()}
                    cpu->pc = cpu->addr;
                    return true;

                default:
                    // unreachable
                    // terminate instr. just in case
                    return true;
            }}

            return true;
        }}
        """
        )

    def declaration(self):
        return f"bool {self.name()}(struct SPC_State state[static 1], uint32_t cycle)"

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

            #include <assert.h>

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


def main():
    make_header()
    make_implementation()
    print_opcode_matrix()


if __name__ == "__main__":
    main()
