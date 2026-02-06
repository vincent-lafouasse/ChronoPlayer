#!/bin/bash

usage() {
    echo "Usage: $0 [--implem | --test | --fail | -i | -t | -f] <opcode>"
    echo "  Flags can be combined: -ti <opcode> for --test and --implem"
    exit 1
}

# Parse flags
SHOW_IMPLEM=false
SHOW_TEST=false
SHOW_FAIL=false
OPCODE=""

for arg in "$@"; do
    case "$arg" in
    --implem) SHOW_IMPLEM=true ;;
    --test)   SHOW_TEST=true ;;
    --fail)   SHOW_FAIL=true ;;
    -*)
        # strip leading dashes and iterate over each character
        flags="${arg#-}"
        for (( j=0; j<${#flags}; j++ )); do
            c="${flags:$j:1}"
            case "$c" in
            i) SHOW_IMPLEM=true ;;
            t) SHOW_TEST=true ;;
            f) SHOW_FAIL=true ;;
            *) echo "Unknown flag: -$c"; usage ;;
            esac
        done
        ;;
    *)
        if [ -n "$OPCODE" ]; then
            echo "Error: unexpected argument '$arg'"
            usage
        fi
        OPCODE="$arg"
        ;;
    esac
done

if [ -z "$OPCODE" ] || ! $SHOW_IMPLEM && ! $SHOW_TEST && ! $SHOW_FAIL; then
    usage
fi

OPCODE_LOWER=$(echo "$OPCODE" | tr '[:upper:]' '[:lower:]')
OPCODE_UPPER=$(echo "$OPCODE" | tr '[:lower:]' '[:upper:]')

if $SHOW_IMPLEM; then
    FILE="src/instructions.gen.c"
    echo "--- Implementation: 0x$OPCODE_UPPER ---"
    sed -n "/\/\* 0x$OPCODE/I,/^}/p" "$FILE"
fi

if $SHOW_TEST; then
    FILE="./test/SingleStepTests/tests/${OPCODE_LOWER}.gen.c"
    if [ ! -f "$FILE" ]; then
        echo "Error: $FILE not found"
        exit 1
    fi
    echo "--- First Test Case for $OPCODE_UPPER ---"
    sed -n "/UTEST/,/^}/ { p; /^}/q; }" "$FILE"
fi

if $SHOW_FAIL; then
    LOG="build/test-logs/SingleStepTests${OPCODE_LOWER}.log"
    SRC="./test/SingleStepTests/tests/${OPCODE_LOWER}.gen.c"

    if [ ! -f "$LOG" ]; then
        echo "Error: Log $LOG not found"
        exit 1
    fi

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
fi
