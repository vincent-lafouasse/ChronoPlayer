#!/bin/bash

BUILD_DIR="./build"
BIN_DIR="${BUILD_DIR}/bin"
LOG_DIR="${BUILD_DIR}/test-logs"

# Colors
GREEN='\033[0;32m'
RED='\033[0;31m'
YELLOW='\033[0;33m'
NC='\033[0m' # No Color

# Create log directory if it doesn't exist
mkdir -p "${LOG_DIR}"

passed=0
failed=0
total=0

echo "Running SingleStepTests..."
echo ""

# Iterate through opcodes in row order (MSB varies, LSB fixed)
for msb in {0..15}; do
    line=""
    for lsb in {0..15}; do
        opcode=$(printf "%x%x" $msb $lsb)
        test_path="${BIN_DIR}/SingleStepTests${opcode}"

        if [ -x "$test_path" ]; then
            log_file="${LOG_DIR}/SingleStepTests${opcode}.log"
            total=$((total + 1))

            # Run test and capture exit code
            if "$test_path" > "$log_file" 2>&1; then
                line+=$(printf "  ${GREEN}%s:✓${NC}" "$opcode")
                passed=$((passed + 1))
            else
                line+=$(printf "  ${RED}%s:✗${NC}" "$opcode")
                failed=$((failed + 1))
            fi
        else
            line+=$(printf "  ${YELLOW}%s:·${NC}" "$opcode")
        fi
    done
    echo -e "$line"
done

echo ""
echo "Total: ${total} | Passed: ${passed} | Failed: ${failed}"

if [ $failed -gt 0 ]; then
    exit 1
fi
