#!/bin/bash

set -e

BUILD_DIR="./build"
BIN_DIR="${BUILD_DIR}/bin"
LOG_DIR="${BUILD_DIR}/test-logs"

# Create log directory if it doesn't exist
mkdir -p "${LOG_DIR}"

# Find all SingleStepTests executables
tests=("${BIN_DIR}"/SingleStepTests*)

if [ ! -e "${tests[0]}" ]; then
    echo "No SingleStepTests executables found in ${BIN_DIR}"
    exit 1
fi

passed=0
failed=0
total=0

echo "Running SingleStepTests..."
echo "=========================="

for test in "${tests[@]}"; do
    if [ ! -x "$test" ]; then
        continue
    fi

    test_name=$(basename "$test")
    log_file="${LOG_DIR}/${test_name}.log"
    total=$((total + 1))

    # Run test and capture exit code
    if "$test" > "$log_file" 2>&1; then
        echo "✓ ${test_name}"
        passed=$((passed + 1))
    else
        echo "✗ ${test_name} (see ${log_file})"
        failed=$((failed + 1))
    fi
done

echo "=========================="
echo "Total: ${total} | Passed: ${passed} | Failed: ${failed}"

if [ $failed -gt 0 ]; then
    exit 1
fi
