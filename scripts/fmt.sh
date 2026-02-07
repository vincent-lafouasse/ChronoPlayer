#!/bin/bash

set -o xtrace

TO_FORMAT=$(find src test -name '*.c' -or -name '*.h' | grep -v '\.gen\.' | grep -v 'utest')
clang-format -i $TO_FORMAT
