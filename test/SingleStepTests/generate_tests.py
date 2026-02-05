import json
from pathlib import Path

# Opcodes that need cycle reordering to match Anomie/Near documentation
# These are indirect indexed addressing mode instructions where the test data
# has WAIT at position 2, but hardware actually does it at position 4
REORDERED_OPCODES = {"17", "37", "57", "77", "97", "b7", "f7"}


class State:
    def __init__(self, json_obj, label):
        state_data = json_obj[label]
        self.pc = state_data["pc"]
        self.a = state_data["a"]
        self.x = state_data["x"]
        self.y = state_data["y"]
        self.sp = state_data["sp"]
        self.psw = state_data["psw"]
        self.aram = state_data["ram"]


class BusAccess:
    def __init__(self, addr, value, operation):
        self.addr = addr
        self.value = value  # Can be None for dummy reads
        self.operation = operation


class TestCase:
    def __init__(self, json_obj):
        self.name = json_obj["name"]
        self.initial_state = State(json_obj, "initial")
        self.final_state = State(json_obj, "final")
        self.bus_accesses = [
            BusAccess(addr, value, operation)
            for addr, value, operation in json_obj["cycles"]
        ]

    def _reorder_bus_accesses_if_needed(self, opcode):
        """Reorder bus accesses for indirect indexed instructions to match Anomie/Near.

        Test data has: opcode, operand, WAIT, AAL, AAH, data
        But Anomie/Near document: opcode, operand, AAL, AAH, WAIT, data
        """
        if opcode.lower() not in REORDERED_OPCODES:
            return self.bus_accesses

        if len(self.bus_accesses) == 6 and self.bus_accesses[2].operation == "wait":
            return [
                self.bus_accesses[0],  # opcode read
                self.bus_accesses[1],  # operand read
                self.bus_accesses[3],  # AAL read
                self.bus_accesses[4],  # AAH read
                self.bus_accesses[2],  # WAIT (moved from position 2)
                self.bus_accesses[5],  # final data read
            ]
        return self.bus_accesses

    def _generate_cpu_state(self, state, var_name):
        """Generate a compact CPU state initializer."""
        return (
            f"    const struct CPU_State {var_name} = "
            f"{{.pc=0x{state.pc:04x}, .a=0x{state.a:02x}, .x=0x{state.x:02x}, "
            f".y=0x{state.y:02x}, .sp=0x{state.sp:02x}, .status=0x{state.psw:02x}}};"
        )

    def _generate_ram_array(self, state, var_name):
        """Generate RAM array, wrapping at 100 columns if needed."""
        lines = []
        ram_entries = [
            f"{{.addr=0x{addr:04x}, .value=0x{val:02x}}}" for addr, val in state.aram
        ]
        ram_str = (
            f"const struct RamEntry {var_name}[] = {{" + ", ".join(ram_entries) + "};"
        )

        if len(ram_str) <= 100:
            lines.append(f"    {ram_str}")
        else:
            lines.append(f"    const struct RamEntry {var_name}[] = {{")
            line = "        "
            for entry in ram_entries:
                if len(line) + len(entry) + 2 > 100 and line.strip():
                    lines.append(line.rstrip())
                    line = "        "
                line += entry + ", "
            if line.strip():
                lines.append(line.rstrip())
            lines.append("    };")
        return lines

    def _generate_bus_events(self, bus_accesses, opcode):
        """Generate bus event array."""
        lines = []
        if opcode.lower() in REORDERED_OPCODES:
            lines.append(
                "    // Bus events reordered to match Anomie/Near (WAIT moved after AAL/AAH reads)"
            )

        lines.append("    const struct BusEvent events[] = {")
        for access in bus_accesses:
            if access.operation == "wait":
                addr_str, val_str, io_type = "DUMMY", "DUMMY", "IO_WAIT"
            else:
                io_type = "IO_READ" if access.operation == "read" else "IO_WRITE"
                addr_str = f"0x{access.addr:04x}"
                val_str = "DUMMY" if access.value is None else f"0x{access.value:02x}"
            lines.append(
                f"        {{.addr={addr_str}, .value={val_str}, .type={io_type}}},"
            )
        lines.append("    };")
        return lines

    def generate_c_test(self):
        """Generate complete C test function."""
        test_name = "_" + self.name.replace(" ", "_")
        opcode = self.name.split()[0]
        bus_accesses = self._reorder_bus_accesses_if_needed(opcode)

        lines = [
            f"UTEST(SingleStepTests_{opcode}, {test_name}) {{",
            self._generate_cpu_state(self.initial_state, "initial_cpu"),
            *self._generate_ram_array(self.initial_state, "initial_ram"),
            self._generate_cpu_state(self.final_state, "final_cpu"),
            *self._generate_ram_array(self.final_state, "final_ram"),
            *self._generate_bus_events(bus_accesses, opcode),
            "    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));",
            f'    run_and_check("{self.name}", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);',
            "}",
        ]
        return "\n".join(lines)


def generate_test_suite(opcode: str):
    """Generate test suite for a single opcode."""
    spec = opcode + ".json"
    output = opcode + ".gen.c"

    json_path = Path(__file__).parent / "specs" / spec
    output_path = Path(__file__).parent / "tests" / output

    with open(json_path) as f:
        tests_json = json.load(f)

    print(f"Found {len(tests_json)} tests in {spec}")

    # Filter out tests where any IO happens in hardware register range 0x00f0-0x00ff
    filtered = [
        t
        for t in tests_json
        if not any(
            cycle[0] is not None and 0xF0 <= cycle[0] <= 0xFF for cycle in t["cycles"]
        )
    ]
    print(
        f"Filtered to {len(filtered)} tests (excluded {len(tests_json) - len(filtered)} with IO in 0xf0-0xff)"
    )

    test_cases = [TestCase(test_json) for test_json in filtered]

    with open(output_path, "w") as f:
        f.write('#include "../utest.h/utest.h"\n\n')
        f.write('#include "test_helper.h"\n\n')
        for test_case in test_cases:
            f.write(test_case.generate_c_test())
            f.write("\n\n")
        f.write("UTEST_MAIN()\n")


def main():
    for opcode in ["00", "20", "40", "60", "80", "e0"]:
        generate_test_suite(opcode)

    for msb in "0123456789abcdef":
        generate_test_suite(msb + "1")
        generate_test_suite(msb + "2")
        if msb != "d":
            generate_test_suite(msb + "4")
        generate_test_suite(msb + "5")
        generate_test_suite(msb + "6")
        generate_test_suite(msb + "7")
        generate_test_suite(msb + "8")
        if msb != "d":
            generate_test_suite(msb + "9")


if __name__ == "__main__":
    main()
