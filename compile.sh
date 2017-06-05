#!/bin/bash

echo "\\   \\   \\"
echo " \\   \\   \\"
echo "  \\   \\   \\"
echo "=============="
echo "Errors here: "
echo
echo

rm ./Multimap
clang -lstdc++ main.cpp Entities/Multimap.cpp Entities/Date.cpp Repository/Repository.cpp Controller/Controller.cpp UI/Console.cpp -o Multimap

if [ $? -eq 0 ]; then
    echo "Whooo, no errors!"
    echo "=============="
    echo "Run here: "
    ./Multimap
fi

echo
echo
echo
