#!/usr/bin/python3

import math

inputString = str(input())
valList     = inputString.split(' ')

it   = int(valList[0])
w    = int(valList[1])
h    = int(valList[2])
x    = w**2 + h**2
size = math.sqrt(x)

for i in range(it):
    val = int(input())
    if val > size:
        print("NE")
    else:
        print("DA")
