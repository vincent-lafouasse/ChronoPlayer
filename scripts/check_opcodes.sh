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

# ANSI colors (disabled if not a terminal)
if [ -t 1 ]; then
    RED='\033[0;31m'
    GRN='\033[0;32m'
    YLW='\033[0;33m'
    RST='\033[0m'
else
    RED='' GRN='' YLW='' RST=''
fi

# Build a flat lookup file from anomie's reference
# Each line: "hex_opcode MNEMONIC bytes cycles_raw"
TMPREF=$(mktemp)
trap 'rm -f "$TMPREF"' EXIT

while IFS= read -r line; do
    if [[ $line =~ ^[[:space:]]+([A-Z][A-Z0-9]*)[[:space:]].*[[:space:]]([0-9A-Fa-f][0-9A-Fa-f])[[:space:]]+([0-9]+)[[:space:]]+([0-9/\?]+)[[:space:]] ]]; then
        mnemonic="${BASH_REMATCH[1]}"
        opcode_hex="${BASH_REMATCH[2]}"
        bytes="${BASH_REMATCH[3]}"
        cycles_raw="${BASH_REMATCH[4]}"

        # normalize opcode to lowercase
        opcode_hex=$(echo "$opcode_hex" | tr '[:upper:]' '[:lower:]')

        echo "$opcode_hex $mnemonic $bytes $cycles_raw" >>"$TMPREF"
    fi
done <"$ANOMIE"

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
        printf "${YLW}SKIP  %s  %-6s (not in anomie reference)${RST}\n" "$op" "$mn"
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
            printf "${RED}FAIL  %s  %-6s%s${RST}\n" "$op" "$mn" "$errors"
            FAIL=$((FAIL + 1))
        else
            printf "${GRN}OK    %s  %-6s (SLEEP/STOP, cycles=? skipped)${RST}\n" "$op" "$mn"
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
        # branch instruction: anomie gives "not-taken/taken", check against not-taken only
        local ref_min="${ref_cycles%/*}"
        if [ "$cyc" != "$ref_min" ]; then
            errors="$errors  cycles: got=$cyc ref=$ref_min (branch, +2 on taken)"
        fi
    else
        if [ "$cyc" != "$ref_cycles" ]; then
            errors="$errors  cycles: got=$cyc ref=$ref_cycles"
        fi
    fi

    if [ -n "$errors" ]; then
        printf "${RED}FAIL  %s  %-6s%s${RST}\n" "$op" "$mn" "$errors"
        FAIL=$((FAIL + 1))
    else
        printf "${GRN}OK    %s  %-6s len=%s cyc=%s${RST}\n" "$op" "$mn" "$len" "$cyc"
        PASS=$((PASS + 1))
    fi
}

# Parse instruction_table.gen.c, collect results with sort key
TMPOUT=$(mktemp)
trap 'rm -f "$TMPREF" "$TMPOUT"' EXIT

current_opcode=""
current_mnemonic=""
current_length=""
current_cycles=""

while IFS= read -r line; do
    if [[ $line =~ \[(0x[0-9a-fA-F]+)\] ]]; then
        current_opcode="${BASH_REMATCH[1]}"
    elif [[ $line =~ \.mnemonic[[:space:]]*=[[:space:]]*\"([^\"]+)\" ]]; then
        current_mnemonic="${BASH_REMATCH[1]}"
    elif [[ $line =~ \.length[[:space:]]*=[[:space:]]*([0-9]+) ]]; then
        current_length="${BASH_REMATCH[1]}"
    elif [[ $line =~ \.cycles[[:space:]]*=[[:space:]]*([0-9]+) ]]; then
        current_cycles="${BASH_REMATCH[1]}"
        # cycles is the last field, emit check
        if [ -n "$current_opcode" ]; then
            # extract hex nibbles for sort key: LSB first, then MSB
            local_hex="${current_opcode#0x}"
            msb="${local_hex%?}"
            lsb="${local_hex#?}"
            emit_check "$current_opcode" "$current_mnemonic" "$current_length" "$current_cycles" |
                while IFS= read -r result; do echo "${lsb}${msb} ${result}"; done >>"$TMPOUT"
        fi
        current_opcode=""
        current_mnemonic=""
        current_length=""
        current_cycles=""
    fi
done <"$TABLE"

# Output sorted by LSB (column-major), then MSB within each column
sort "$TMPOUT" | cut -d' ' -f2-

echo ""
echo "--- Summary ---"
printf "${GRN}PASS: %d${RST}  ${RED}FAIL: %d${RST}  ${YLW}SKIP: %d${RST}\n" "$PASS" "$FAIL" "$SKIP"
exit $((FAIL > 0 ? 1 : 0))
