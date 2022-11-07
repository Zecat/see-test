#!/usr/bin/env bash

#echo "grammar.js" $(find corpus -type f) | entr tree-sitter generate && tree-sitter test

if [ $# -gt 0 ]; then
    filter="-f $1";
fi

find corpus grammar.js -type f | entr -cs "tree-sitter generate && tree-sitter test $filter"
