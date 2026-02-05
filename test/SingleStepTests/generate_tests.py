import json
from pathlib import Path
from pprint import pprint


def main():
    json_path = Path(__file__).parent / "v1" / "00.json"

    with open(json_path) as f:
        tests = json.load(f)

    print(f"Total tests in 00.json: {len(tests)}")
    print()

    # Get first test case
    first_test = tests[0]

    print("=" * 60)
    print("FIRST TEST CASE (parsed)")
    print("=" * 60)
    print()

    # Print the structure
    print(f"Name: {first_test['name']}")
    print()

    print("Initial State:")
    print(f"  PC:  0x{first_test['initial']['pc']:04X}")
    print(f"  A:   0x{first_test['initial']['a']:02X}")
    print(f"  X:   0x{first_test['initial']['x']:02X}")
    print(f"  Y:   0x{first_test['initial']['y']:02X}")
    print(f"  SP:  0x{first_test['initial']['sp']:02X}")
    print(f"  PSW: 0x{first_test['initial']['psw']:02X}")
    print(f"  RAM: {first_test['initial']['ram']}")
    print()

    print("Expected Final State:")
    print(f"  PC:  0x{first_test['final']['pc']:04X}")
    print(f"  A:   0x{first_test['final']['a']:02X}")
    print(f"  X:   0x{first_test['final']['x']:02X}")
    print(f"  Y:   0x{first_test['final']['y']:02X}")
    print(f"  SP:  0x{first_test['final']['sp']:02X}")
    print(f"  PSW: 0x{first_test['final']['psw']:02X}")
    print(f"  RAM: {first_test['final']['ram']}")
    print()

    print("Bus Cycles:")
    for i, cycle in enumerate(first_test["cycles"]):
        addr, val, op = cycle
        val_str = f"0x{val:02X}" if val is not None else "None"
        print(f"  [{i}] addr=0x{addr:04X}, val={val_str}, op={op}")
    print()

    print("=" * 60)
    print("RAW JSON:")
    print("=" * 60)
    pprint(first_test, width=80)


if __name__ == "__main__":
    main()
