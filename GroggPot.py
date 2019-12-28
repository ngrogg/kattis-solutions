#!/usr/bin/python3

import math

count  = int(input())
final  = 0

for i in range(count):
    inputNum  = str(input())
    number    = int(inputNum[0:-1])
    power     = int(inputNum[-1])
    final    += number**power

print(final)
