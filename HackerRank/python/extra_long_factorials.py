#!/bin/python3

import math
import os
import random
import re
import sys

#
# Complete the 'extraLongFactorials' function below.
#
# The function accepts INTEGER n as parameter.
#

def factorial(n):
    if n <= 1:
        return n;
    return n * factorial(n-1);

def extraLongFactorials(n):
    # Write your code here
    print(factorial(n));

if __name__ == '__main__':
    n = int(input().strip())

    extraLongFactorials(n)
