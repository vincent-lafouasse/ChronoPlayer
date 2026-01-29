from enum import StrEnum, Enum
import inspect
import os


instructions = dict()


def add_instruction(op, instruction):
    if op in instructions:
        raise ValueError(f"trying to overwrite opcode {hex(op)}")
    instructions[op] = instruction


def trace_source():
    caller_frame = inspect.stack()[1]
    filename = os.path.basename(caller_frame.filename)
    line = caller_frame.lineno
    return f"/* generated from {filename}: l.{line} */"


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


def logic_op_payload(reg, op, data):
    dest = f"cpu->{reg}"

    return [trace_source(), f"{dest} {op}= {data};"] + check_zero_neg(dest)


def write_register(reg, data, is_16bit=False, updates_flags=True):
    lines = [trace_source(), f"cpu->{reg} = {data};"]
    if updates_flags:
        lines += check_zero_neg(f"cpu->{reg}", is_16bit)
    return lines


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
                /* could do a dummy read but shouldn't matter */
                assert(cycle == 2);
                (void)state;
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
                logic_op_payload("a", "|", "cpu->data8[0]"),
            ),
        )
        add_instruction(
            0x28,
            TemplateInstruction(
                "AND",
                "AND   A, #i",
                cls(Register.A),
                logic_op_payload("a", "&", "cpu->data8[0]"),
            ),
        )
        add_instruction(
            0x48,
            TemplateInstruction(
                "EOR",
                "EOR   A, #i",
                cls(Register.A),
                logic_op_payload("a", "^", "cpu->data8[0]"),
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

                /* could do a dummy read but shouldn't matter */
                assert(cycle == 2);
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
                logic_op_payload("a", "|", "cpu->data8[0]"),
            ),
        )
        add_instruction(
            0x24,
            TemplateInstruction(
                "AND",
                "AND   A, d",
                cls(Register.A),
                logic_op_payload("a", "&", "cpu->data8[0]"),
            ),
        )
        add_instruction(
            0x44,
            TemplateInstruction(
                "EOR",
                "EOR   A, d",
                cls(Register.A),
                logic_op_payload("a", "^", "cpu->data8[0]"),
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
                        // idle cycle, could do a dummy read but shouldnt matter
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
                logic_op_payload("a", "&", "cpu->data8[0]"),
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
                logic_op_payload("a", "^", "cpu->data8[0]"),
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
                logic_op_payload("a", "|", "cpu->data8[0]"),
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
                logic_op_payload("a", "&", "cpu->data8[0]"),
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
                logic_op_payload("a", "^", "cpu->data8[0]"),
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
                logic_op_payload("a", "|", "cpu->data8[0]"),
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
                            /* could do a dummy read but shouldn't matter */
                            /* let's set the addr now bc why not */
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
                            /* could do a dummy read but shouldn't matter */
                            /* let's increment X now bc why not */
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

                assert(cycle >= 2 || cycle <= 6);

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
                        /* could do a dummy read but shouldn't matter */
                        /* let's set the addr now bc why not */
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
                        cpu->addr = u16_parse(cpu->data8[0], cpu->data8[1]);
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
                logic_op_payload("a", "&", "cpu->data8[0]"),
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
                logic_op_payload("a", "^", "cpu->data8[0]"),
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
                logic_op_payload("a", "|", "cpu->data8[0]"),
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
                /* could do a dummy read but shouldn't matter */
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

    def name(self):
        return f"tcall_{self.n}"

    def full_mnemonic(self):
        return f"TCALL {self.n}"

    def declaration(self):
        return f"bool {self.name()}(struct SPC_State state[static 1], uint32_t cycle)"

    def body(self):
        vector_low = 0xFFC0 + (15 - self.n) * 2
        vector_hi = vector_low + 1

        return inspect.cleandoc(
            f"""
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
                        /* "idle" cycle, could do a dummy read but shouldn't matter */
                        return false;

                    // cycle 5-6 fetch the address to go to at a predetermined address
                    case 5:
                        cpu->data8[0] = bus_read(state, 0x{vector_low:x});
                        return false;
                    case 6:
                        cpu->data8[1] = bus_read(state, 0x{vector_hi:x});
                        // new pc
                        cpu->addr = u16_parse(cpu->data8[0], cpu->data8[1]);
                        return false;

                    // cycle 7-8 are idle, we just publish the new pc at the end of cycle 8
                    case 7:
                        /* "idle" cycle, could do a dummy read but shouldn't matter */
                        return false;
                    case 8:
                        /* "idle" cycle, could do a dummy read but shouldn't matter */
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

    def render(self):
        return f"{self.declaration()}\n{self.body()}"

    @classmethod
    def register_instructions(cls):
        for i in range(16):
            opcode = 1 + 16 * i
            add_instruction(
                opcode,
                cls(i),
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

                assert(cycle >= 2 || cycle <= 6);

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
                        cpu->addr = u16_parse(cpu->data8[0], cpu->data8[1]);
                        return false;
                    case 5:
                        /* "idle" cycle, could do a dummy read but shouldn't matter */
                        /* let's take this time to index AA */
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
        pass


RegisterDirectMode.register_instructions()
RegisterImmediateMode.register_instructions()
MovRegisterRegister.register_instructions()
RegisterDirectIndexedMode.register_instructions()
RegisterIndirectMode.register_instructions()
generate_register_indirect_incremented()
RegisterIndexedIndirectMode.register_instructions()
PswInstruction.register_instructions()
TCallInstruction.register_instructions()


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
