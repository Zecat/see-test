#!/usr/bin/env bash

tree-sitter generate
cd src
gcc ./parser.c -fPIC -I./ --shared -o ~/.tree-sitter/bin/cmut.so
cd ..
