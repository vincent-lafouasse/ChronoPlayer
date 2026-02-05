#!/bin/bash

FILE="src/instructions.gen.c"
OPCODE=$1

if [ -z "$OPCODE" ]; then
    echo "Usage: $0 <opcode>  (e.g., $0 b7)"
    exit 1
fi

if [ ! -f "$FILE" ]; then
    echo "Error: $FILE not found."
    exit 1
fi

echo "--- Searching for Opcode: 0x$OPCODE in $FILE ---"

sed -n "/\/\* 0x$OPCODE/I,/^}/p" "$FILE"
