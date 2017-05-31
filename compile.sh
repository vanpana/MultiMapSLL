#!/bin/bash

echo "\\   \\   \\"
echo " \\   \\   \\"
echo "  \\   \\   \\"
echo "=============="
echo "Errors here: "
echo
echo

rm ./Multimap
gcc -lstdc++ main.cpp Multimap.cpp -o Multimap

if [ $? -eq 0 ]; then
    echo "Whooo, no errors!"
    echo "=============="
    echo "Run here: "
    ./Multimap
fi

echo
echo
echo
