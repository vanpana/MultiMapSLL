#!/bin/bash

echo "\\   \\   \\"
echo " \\   \\   \\"
echo "  \\   \\   \\"
echo "=============="
echo "Errors here: "
echo
echo

rm ./Multimap
clang -lstdc++ main.cpp Multimap.cpp -o Multimap

if [ $? -eq 0 ]; then
    echo "Whooo, no errors!"
    echo "=============="
    echo "Run here: "
    ./Multimap
fi

echo
echo
echo
