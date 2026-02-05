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


def main():
    json_path = Path(__file__).parent / "v1" / "00.json"

    with open(json_path) as f:
        tests_json = json.load(f)

    print(f"Total tests in 00.json: {len(tests_json)}\n")

    test = TestCase(tests_json[0])
    test.log()


if __name__ == "__main__":
    main()
