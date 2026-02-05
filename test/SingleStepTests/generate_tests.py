import json
from pathlib import Path
from pprint import pprint


class State:
    def __init__(self, json_obj, label):
        state_data = json_obj[label]
        self.pc = state_data["pc"]
        self.a = state_data["a"]
        self.x = state_data["x"]
        self.y = state_data["y"]
        self.sp = state_data["sp"]
        self.psw = state_data["psw"]
        self.aram = state_data["ram"]  # List of [addr, value] pairs

    def log(self, prefix="State"):
        print(f"{prefix}:")
        print(f"  PC:  0x{self.pc:04X}")
        print(f"  A:   0x{self.a:02X}")
        print(f"  X:   0x{self.x:02X}")
        print(f"  Y:   0x{self.y:02X}")
        print(f"  SP:  0x{self.sp:02X}")
        print(f"  PSW: 0x{self.psw:02X}")
        print(f"  RAM: {self.aram}")


class BusAccess:
    Read = 1
    Write = 2

    def __init__(self, addr, value, operation):
        self.addr = addr
        self.value = value  # Can be None for dummy reads
        self.operation = operation  # BusAccess.Read or BusAccess.Write

    def log(self):
        val_str = f"0x{self.value:02X}" if self.value is not None else "None"
        op_str = "read" if self.operation == "read" else "write"
        print(f"  addr=0x{self.addr:04X}, val={val_str}, op={op_str}")


# {"name":"00 0000","initial":{"pc":30256,"a":56,"x":78,"y":127,"sp":236,"psw":145,"ram":[[30256,0]]},"final":{"a":56,"x":78,"y":127,"sp":236,"pc":30257,"psw":145,"ram":[[30256,0]]},"cycles":[[30256,0,"read"],[30257,null,"read"]]}
class TestCase:
    def __init__(self, json_obj):
        self.raw = json_obj
        self.name = json_obj["name"]

        self.initial_state = State(json_obj, "initial")
        self.final_state = State(json_obj, "final")

        self.bus_accesses = [
            BusAccess(addr, value, operation)
            for addr, value, operation in json_obj["cycles"]
        ]

    def log(self):
        print("=" * 60)
        print(f"Test: {self.name}")
        print("=" * 60)
        print()
        self.initial_state.log("Initial State")
        print()
        self.final_state.log("Final State")
        print()
        print("Bus Accesses:")
        for i, access in enumerate(self.bus_accesses):
            print(f"  [{i}]", end=" ")
            access.log()
        print()

    def generate_c_test(self):
        # Sanitize test name for C identifier
        test_name = "_" + self.name.replace(" ", "_")
        opcode = self.name.split()[0]

        lines = []
        lines.append(f"UTEST(SingleStepTests_{opcode}, {test_name}) {{")

        s = self.initial_state
        lines.append(
            f"    const struct CPU_State initial_cpu = {{.pc=0x{s.pc:04x}, .a=0x{s.a:02x}, .x=0x{s.x:02x}, .y=0x{s.y:02x}, .sp=0x{s.sp:02x}, .status=0x{s.psw:02x}}};"
        )

        # compact, wrap at ~100 cols
        ram_entries = [f"{{.addr=0x{addr:04x}, .value=0x{val:02x}}}" for addr, val in s.aram]
        ram_str = (
            "const struct RamEntry initial_ram[] = {" + ", ".join(ram_entries) + "};"
        )
        if len(ram_str) <= 100:
            lines.append(f"    {ram_str}")
        else:
            # Wrap long lines
            lines.append("    const struct RamEntry initial_ram[] = {")
            line = "        "
            for i, entry in enumerate(ram_entries):
                if len(line) + len(entry) + 2 > 100 and line.strip():
                    lines.append(line.rstrip())
                    line = "        "
                line += entry + ", "
            if line.strip():
                lines.append(line.rstrip())
            lines.append("    };")

        s = self.final_state
        lines.append(
            f"    const struct CPU_State final_cpu = {{.pc=0x{s.pc:04x}, .a=0x{s.a:02x}, .x=0x{s.x:02x}, .y=0x{s.y:02x}, .sp=0x{s.sp:02x}, .status=0x{s.psw:02x}}};"
        )

        ram_entries = [f"{{.addr=0x{addr:04x}, .value=0x{val:02x}}}" for addr, val in s.aram]
        ram_str = (
            "const struct RamEntry final_ram[] = {" + ", ".join(ram_entries) + "};"
        )
        if len(ram_str) <= 100:
            lines.append(f"    {ram_str}")
        else:
            lines.append("    const struct RamEntry final_ram[] = {")
            line = "        "
            for i, entry in enumerate(ram_entries):
                if len(line) + len(entry) + 2 > 100 and line.strip():
                    lines.append(line.rstrip())
                    line = "        "
                line += entry + ", "
            if line.strip():
                lines.append(line.rstrip())
            lines.append("    };")

        lines.append("    const struct BusEvent events[] = {")
        for access in self.bus_accesses:
            io_type = "IO_READ" if access.operation == "read" else "IO_WRITE"
            val = "DUMMY" if access.value is None else f"0x{access.value:02x}"
            lines.append(f"        {{.addr=0x{access.addr:04x}, .value={val}, .type={io_type}}},")
        lines.append("    };")

        lines.append(
            "    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));"
        )
        lines.append(
            f'    run_and_check("{self.name}", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);'
        )
        lines.append("}")

        return "\n".join(lines)


def generate_test_suite(opcode: str):
    spec = opcode + ".json"
    output = opcode + ".c"

    json_path = Path(__file__).parent / "specs" / spec
    output_path = Path(__file__).parent / output

    with open(json_path) as f:
        tests_json = json.load(f)

    print(f"Found {len(tests_json)} tests in {spec}")

    # Filter out tests where PC is in hardware register range 0x00f0-0x00ff
    filtered = [t for t in tests_json if not (0xf0 <= t["initial"]["pc"] <= 0xff)]
    print(f"Filtered to {len(filtered)} tests (excluded {len(tests_json) - len(filtered)} with PC in 0xf0-0xff)")

    test_cases = [TestCase(test_json) for test_json in filtered]

    with open(output_path, "w") as f:
        f.write('#include "../utest.h/utest.h"\n')
        f.write('\n')
        f.write('#include "test_helper.h"\n')
        f.write('\n')

        for test_case in test_cases:
            f.write(test_case.generate_c_test())
            f.write('\n\n')

        f.write("UTEST_MAIN()\n")

def main():
    generate_test_suite("40")
    generate_test_suite("60")
    generate_test_suite("80")
    generate_test_suite("e0")

if __name__ == "__main__":
    main()
