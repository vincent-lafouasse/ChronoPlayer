#!/bin/bash
#
# lint.sh — style checks and static analysis (no build step required)
#
# format:   clang-format (C source / headers), black (Python)
# analyse:  shellcheck (shell scripts) — static analysis, no auto-fix
#
# Python linting is skipped: generator scripts are intentionally loose.
# clang-tidy needs compile_commands.json and runs as a separate CI step.
#
# Usage:
#   bash ./scripts/lint.sh --check    report violations, exit 1 if any  (CI / pre-commit)
#   bash ./scripts/lint.sh --apply    fix formatting in-place            (dev)
#                                     analysis violations are still reported and exit 1

set -euo pipefail

# ── Terminal detection ────────────────────────────────────────────────────────
IS_A_TTY=false
[ -t 1 ] && IS_A_TTY=true

if $IS_A_TTY; then
    BOLD='\033[1m'; GREEN='\033[0;32m'; RED='\033[0;31m'; NC='\033[0m'
else
    BOLD=''; GREEN=''; RED=''; NC=''
fi

# ── Argument parsing ──────────────────────────────────────────────────────────
usage() {
    echo "Usage: $0 [--check | --apply]"
    echo ""
    echo "  --check   Report violations without modifying files (default)"
    echo "  --apply   Fix formatting in-place; analysis violations still reported"
    exit 1
}

MODE="check"
for arg in "$@"; do
    case "$arg" in
        --check) MODE="check" ;;
        --apply) MODE="apply" ;;
        *)       usage ;;
    esac
done

# ── File lists ────────────────────────────────────────────────────────────────
# C and shell files are discovered automatically.
# Python files are listed explicitly: there are few of them and some generators
# are intentionally exempt from formatting.

C_FILES=()
while IFS= read -r f; do C_FILES+=("$f"); done \
    < <(find src test -name '*.c' -o -name '*.h' | grep -v '\.gen\.' | grep -v 'utest')

SH_FILES=()
while IFS= read -r f; do SH_FILES+=("$f"); done \
    < <(find scripts -name '*.sh')

# Formatted by black:
PY_FILES=(
    scripts/generate_tests.py
)

# Exempt from black — intentionally loose single-use generators:
# PY_SKIP=(
#     scripts/generate_instructions.py
# )

ERRORS=0

# ── clang-format ──────────────────────────────────────────────────────────────
if [ "${#C_FILES[@]}" -gt 0 ]; then
    if [ "$MODE" = "check" ]; then
        echo -e "${BOLD}[clang-format] checking…${NC}"
        if clang-format --dry-run --Werror "${C_FILES[@]}"; then
            echo -e "${GREEN}clang-format: OK${NC}"
        else
            echo -e "${RED}clang-format: violations found${NC}"
            ERRORS=$((ERRORS + 1))
        fi
    else
        echo -e "${BOLD}[clang-format] applying…${NC}"
        clang-format -i "${C_FILES[@]}"
        echo -e "${GREEN}clang-format: done${NC}"
    fi
fi

# ── shellcheck ────────────────────────────────────────────────────────────────
# Pure static analysis — no auto-fix exists.  Runs regardless of --check /
# --apply and always contributes to the error count on violation.
if [ "${#SH_FILES[@]}" -gt 0 ]; then
    echo -e "${BOLD}[shellcheck] analysing…${NC}"
    if shellcheck "${SH_FILES[@]}"; then
        echo -e "${GREEN}shellcheck: OK${NC}"
    else
        echo -e "${RED}shellcheck: violations found (require manual fixes)${NC}"
        ERRORS=$((ERRORS + 1))
    fi
fi

# ── black ─────────────────────────────────────────────────────────────────────
if [ "${#PY_FILES[@]}" -gt 0 ]; then
    if [ "$MODE" = "check" ]; then
        echo -e "${BOLD}[black] checking…${NC}"
        if black --check --diff "${PY_FILES[@]}"; then
            echo -e "${GREEN}black: OK${NC}"
        else
            echo -e "${RED}black: violations found${NC}"
            ERRORS=$((ERRORS + 1))
        fi
    else
        echo -e "${BOLD}[black] applying…${NC}"
        black "${PY_FILES[@]}"
        echo -e "${GREEN}black: done${NC}"
    fi
fi

# ── Summary ───────────────────────────────────────────────────────────────────
if [ "$ERRORS" -gt 0 ]; then
    echo -e "${RED}${BOLD}${ERRORS} tool(s) reported violations.${NC}"
    if [ "$MODE" = "apply" ]; then
        echo "Formatting has been applied; analysis violations above require manual fixes."
    else
        echo "Run './scripts/lint.sh --apply' to fix formatting violations."
    fi
    exit 1
fi
