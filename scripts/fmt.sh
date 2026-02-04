#!/bin/bash

find src -name '*.c' -or -name '*.h' | \
  grep -v -f .clang-format-ignore | \
  xargs clang-format -i
