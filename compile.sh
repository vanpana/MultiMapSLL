#!/bin/bash

echo "\\   \\   \\"
echo " \\   \\   \\"
echo "  \\   \\   \\"

# File cleanup on start
if [ -f ./Multimap ]; then
    rm ./Multimap
fi

find . -name '*.gcda' -print0 | xargs -0 rm

if [ -d CODE_COVERAGE ]; then
    rm -rf CODE_COVERAGE/
fi

# Building the executable
cmake -DBUILD_SHARED_LIBS=ON .
make

# Running the executable if no error occured during building
if [ $? -eq 0 ]; then
    echo "Whooo, no errors!"
    echo -n $'\360\237\224\245 '  && echo -n $'\360\237\224\245 ' && echo $'\360\237\224\245'
    echo "=============="
    echo "Run here: "
    ./Multimap
# Printing the errors if there were any
else
    echo "=============="
    echo "Errors here: "
    echo
    echo
fi

# Building test coverage files (if wanted)
echo "Run ended, do you want test coverage? (y\n)"
read response
if [ $response = 'y' ]; then
    ./coverage.sh
fi

# File cleanup on exit
find . -name '*.gcda' -print0 | xargs -0 rm

if [ $? -eq 0 ]; then
    echo
    echo
    echo "Task successfully ended"
    echo
    echo
fi

#Fire emoji
#echo $'\360\237\224\245'
