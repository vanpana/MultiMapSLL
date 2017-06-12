#!/bin/bash

echo "\\   \\   \\"
echo " \\   \\   \\"
echo "  \\   \\   \\"

response=''
if [ -x Multimap ]; then
    response='n'
    echo "Do you want to run the previous build? (y/n)"
    read response
fi

if [ ! $response = '' ]; then
    if [ $response = 'y' ]; then
        ./Multimap
    fi
fi

if [ $response = 'n' -o ! -x Multimap ]; then
    if [ -f ./Multimap ]; then
        rm ./Multimap
    fi

    # File cleanup on start
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
        echo "Errors up here ^ "
        echo
        echo
    fi
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
