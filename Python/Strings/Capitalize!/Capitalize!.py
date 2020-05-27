#!/bin/python3

import math
import os
import random
import re
import sys

# Complete the solve function below.
def solve(s):
    for i in range(len(s)):
        if i != 0:
            if s[i-1] == ' ' and s[i].isalpha():
                before = s[0:i]
                after = s[i+1:len(s)]
                new = s[i].upper()
                s = before + new + after
        elif i == 0 and s[i].isalpha():
            before = s[0:i]
            after = s[i+1:len(s)]
            new = s[i].upper()
            s = before + new + after
    return s


if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    s = input()

    result = solve(s)

    fptr.write(result + '\n')

    fptr.close()
