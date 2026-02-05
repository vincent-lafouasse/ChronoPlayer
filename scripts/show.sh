#!/bin/bash

MODE=$1
OPCODE=$2

# Shift arguments if the first one is a flag
if [[ "$MODE" != --* ]]; then
    echo "Usage: $0 [--implem | --test] <opcode>"
    exit 1
fi

if [ -z "$OPCODE" ]; then
    echo "Error: Opcode missing."
    exit 1
fi

# Normalize opcode to lowercase for file paths
OPCODE_LOWER=$(echo "$OPCODE" | tr '[:upper:]' '[:lower:]')

case "$MODE" in
    --implem)
        FILE="src/instructions.gen.c"
        echo "--- Showing Implementation: 0x$OPCODE ---"
        # Match the comment header, print until the first ^}
        sed -n "/\/\* 0x$OPCODE/I,/^}/p" "$FILE"
        ;;

    --test)
        # Assuming the test file follows the lowercase opcode naming
        FILE="./test/SingleStepTests/tests/${OPCODE_LOWER}.gen.c"
        if [ ! -f "$FILE" ]; then
            echo "Error: Test file $FILE not found."
            exit 1
        fi
        echo "--- Showing First Test Case: $OPCODE ---"
        # 1. Find the first UTEST
        # 2. Print until the first ^}
        # 3. 'q' tells sed to quit immediately so we don't get the whole file
        sed -n "/UTEST/,/^}/ { p; /^}/q; }" "$FILE"
        ;;

    *)
        echo "Unknown flag: $MODE. Use --implem or --test."
        exit 1
        ;;
esac
