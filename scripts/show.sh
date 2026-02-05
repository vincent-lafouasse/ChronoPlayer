#!/bin/bash

MODE=$1
OPCODE=$2
OPCODE_LOWER=$(echo "$OPCODE" | tr '[:upper:]' '[:lower:]')
OPCODE_UPPER=$(echo "$OPCODE" | tr '[:lower:]' '[:upper:]')

usage() {
    echo "Usage: $0 [--implem | --test | --fail] <opcode>"
    exit 1
}

if [[ "$MODE" != --* ]] || [ -z "$OPCODE" ]; then usage; fi

case "$MODE" in
    --implem)
        FILE="src/instructions.gen.c"
        echo "--- Implementation: 0x$OPCODE_UPPER ---"
        sed -n "/\/\* 0x$OPCODE/I,/^}/p" "$FILE"
        ;;

    --test)
        FILE="./test/SingleStepTests/tests/${OPCODE_LOWER}.gen.c"
        [ ! -f "$FILE" ] && { echo "Error: $FILE not found"; exit 1; }
        echo "--- First Test Case for $OPCODE_UPPER ---"
        sed -n "/UTEST/,/^}/ { p; /^}/q; }" "$FILE"
        ;;

    --fail)
        LOG="build/test-logs/SingleStepTests${OPCODE_LOWER}.log"
        SRC="./test/SingleStepTests/tests/${OPCODE_LOWER}.gen.c"

        if [ ! -f "$LOG" ]; then echo "Error: Log $LOG not found"; exit 1; fi

        # 1. Find the first [ FAILED ] line for this opcode
        # Example line: [  FAILED  ] SingleStepTests_C7._C7_0000 (62833ns)
        FAIL_LINE=$(grep -m 1 "\[  FAILED  \] .*_$OPCODE_UPPER" "$LOG")

        if [ -z "$FAIL_LINE" ]; then
            echo "No failures found for $OPCODE_UPPER in log."
            exit 0
        fi

        # 2. Extract the test ID (e.g., 0000) using parameter expansion or awk
        TEST_ID=$(echo "$FAIL_LINE" | awk -F'_' '{print $NF}' | cut -d' ' -f1)

        echo "--- First Failure Found: $OPCODE_UPPER $TEST_ID ---"
        grep -B 3 "Message : .*$OPCODE_UPPER $TEST_ID" "$LOG"
        echo -e "\n--- Corresponding Test Code ---"

        # 3. Pull that specific test block from the source file
        sed -n "/UTEST(.*, .*_$TEST_ID)/,/^}/p" "$SRC"
        ;;

    *)
        usage
        ;;
esac
