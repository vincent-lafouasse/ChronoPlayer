#!/bin/bash

TO_FORMAT=$(find src test -name '*.c' -or -name '*.h' | grep -v '\.gen\.' | grep -v 'utest')
clang-format -i $TO_FORMAT

TO_FORMAT=$(find . -name '*.py' | grep -v specs)
black $TO_FORMAT
