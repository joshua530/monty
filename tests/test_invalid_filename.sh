#!/bin/bash

gcc -Werror -Wall -pedantic -Wextra -std=c89 ../file.c test_invalid_filename.c -o test_invalid_filename &&
ERROR_MSG=$(./test_invalid_filename 3>&1 1>&2 2>&3)

if [[ $? == 1 && $ERROR_MSG == "Error: Can't open file empty.exe" ]]; then
    echo "success"
else
    echo "failed"
fi

if [ -f "test_invalid_filename" ]; then
    rm "test_invalid_filename"
fi
