#!/usr/bin/python3

import math

inputString = str(input())
inputList   = list(inputString)
t, c, g     = 0, 0, 0

for i in inputList:
    if i == 'T':
        t += 1
    elif i == 'C':
        c += 1
    else: 
        g += 1

score           = t ** 2 + c ** 2 + g ** 2
sevenMultiplier = min(t,c,g) * 7
print(score + sevenMultiplier)
