#!/bin/bash
#
# Cross-references instruction_table.gen.c against anomie's spc700.txt
# Checks: mnemonic match, instruction length, cycle count
#
# Usage: bash ./scripts/check_opcodes.sh
#
# Compatible with bash 3.2+ (no associative arrays)

TABLE="./src/instruction_table.gen.c"
ANOMIE="./references/anomie/spc700.txt"

PASS=0
FAIL=0
SKIP=0

# Build a flat lookup file from anomie's reference
# Each line: "hex_opcode MNEMONIC bytes cycles_raw"
TMPREF=$(mktemp)
trap 'rm -f "$TMPREF"' EXIT

while IFS= read -r line; do
    if [[ "$line" =~ ^[[:space:]]+([A-Z][A-Z0-9]*)[[:space:]].*[[:space:]]([0-9A-Fa-f][0-9A-Fa-f])[[:space:]]+([0-9]+)[[:space:]]+([0-9/\?]+)[[:space:]] ]]; then
        mnemonic="${BASH_REMATCH[1]}"
        opcode_hex="${BASH_REMATCH[2]}"
        bytes="${BASH_REMATCH[3]}"
        cycles_raw="${BASH_REMATCH[4]}"

        # normalize opcode to lowercase
        opcode_hex=$(echo "$opcode_hex" | tr '[:upper:]' '[:lower:]')

        echo "$opcode_hex $mnemonic $bytes $cycles_raw" >> "$TMPREF"
    fi
done < "$ANOMIE"

# Lookup function: sets ref_mn, ref_bytes, ref_cycles from TMPREF
lookup_ref() {
    local op_bare="$1"
    local result
    result=$(grep "^${op_bare} " "$TMPREF" | head -1)
    if [ -z "$result" ]; then
        ref_mn=""
        ref_bytes=""
        ref_cycles=""
        return 1
    fi
    ref_mn=$(echo "$result" | cut -d' ' -f2)
    ref_bytes=$(echo "$result" | cut -d' ' -f3)
    ref_cycles=$(echo "$result" | cut -d' ' -f4)
    return 0
}

emit_check() {
    local op="$1" mn="$2" len="$3" cyc="$4"

    # strip 0x prefix for lookup
    local op_bare="${op#0x}"

    if ! lookup_ref "$op_bare"; then
        printf "SKIP  %s  %-6s (not in anomie reference)\n" "$op" "$mn"
        SKIP=$((SKIP + 1))
        return
    fi

    local errors=""

    # -- SLEEP/STOP special case --
    if [ "$mn" = "SLEEP" ] || [ "$mn" = "STOP" ]; then
        if [ "$mn" != "$ref_mn" ]; then
            errors="$errors  mnemonic: got=$mn ref=$ref_mn"
        fi
        if [ "$len" != "0" ] && [ "$len" != "$ref_bytes" ]; then
            errors="$errors  length: got=$len ref=$ref_bytes"
        fi
        if [ -n "$errors" ]; then
            printf "FAIL  %s  %-6s%s\n" "$op" "$mn" "$errors"
            FAIL=$((FAIL + 1))
        else
            printf "OK    %s  %-6s (SLEEP/STOP, cycles=? skipped)\n" "$op" "$mn"
            PASS=$((PASS + 1))
        fi
        return
    fi

    # -- mnemonic check --
    if [ "$mn" != "$ref_mn" ]; then
        errors="$errors  mnemonic: got=$mn ref=$ref_mn"
    fi

    # -- length check --
    if [ "$len" != "0" ] && [ "$len" != "$ref_bytes" ]; then
        errors="$errors  length: got=$len ref=$ref_bytes"
    elif [ "$len" = "0" ]; then
        errors="$errors  length: not set (ref=$ref_bytes)"
    fi

    # -- cycle check --
    if [ "$cyc" = "0" ]; then
        errors="$errors  cycles: not set (ref=$ref_cycles)"
    elif echo "$ref_cycles" | grep -q '/'; then
        # branch instruction: anomie gives "min/max"
        local ref_min="${ref_cycles%/*}"
        local ref_max="${ref_cycles#*/}"
        if [ "$cyc" != "$ref_min" ] && [ "$cyc" != "$ref_max" ]; then
            errors="$errors  cycles: got=$cyc ref=$ref_cycles (branch)"
        fi
    else
        if [ "$cyc" != "$ref_cycles" ]; then
            errors="$errors  cycles: got=$cyc ref=$ref_cycles"
        fi
    fi

    if [ -n "$errors" ]; then
        printf "FAIL  %s  %-6s%s\n" "$op" "$mn" "$errors"
        FAIL=$((FAIL + 1))
    else
        printf "OK    %s  %-6s len=%s cyc=%s\n" "$op" "$mn" "$len" "$cyc"
        PASS=$((PASS + 1))
    fi
}

# Parse instruction_table.gen.c
current_opcode=""
current_mnemonic=""
current_length=""
current_cycles=""

while IFS= read -r line; do
    if [[ "$line" =~ \[(0x[0-9a-fA-F]+)\] ]]; then
        current_opcode="${BASH_REMATCH[1]}"
    elif [[ "$line" =~ \.mnemonic[[:space:]]*=[[:space:]]*\"([^\"]+)\" ]]; then
        current_mnemonic="${BASH_REMATCH[1]}"
    elif [[ "$line" =~ \.length[[:space:]]*=[[:space:]]*([0-9]+) ]]; then
        current_length="${BASH_REMATCH[1]}"
    elif [[ "$line" =~ \.cycles[[:space:]]*=[[:space:]]*([0-9]+) ]]; then
        current_cycles="${BASH_REMATCH[1]}"
        # cycles is the last field, emit check
        if [ -n "$current_opcode" ]; then
            emit_check "$current_opcode" "$current_mnemonic" "$current_length" "$current_cycles"
        fi
        current_opcode=""
        current_mnemonic=""
        current_length=""
        current_cycles=""
    fi
done < "$TABLE"

echo ""
echo "--- Summary ---"
echo "PASS: $PASS  FAIL: $FAIL  SKIP: $SKIP"
exit $((FAIL > 0 ? 1 : 0))
