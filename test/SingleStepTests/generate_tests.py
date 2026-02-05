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


class BusAccess:
    Read = 1
    Write = 2

    def __init__(self, addr, value, operation):
        self.addr = addr
        self.value = value  # Can be None for dummy reads
        self.operation = operation  # BusAccess.Read or BusAccess.Write


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


def main():
    json_path = Path(__file__).parent / "v1" / "00.json"

    with open(json_path) as f:
        tests_json = json.load(f)

    test = TestCase(tests_json[0])

    pprint(test.raw, width=80)


if __name__ == "__main__":
    main()
