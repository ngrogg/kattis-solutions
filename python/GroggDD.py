#!/usr/bin/python3

import math

inputString = str(input())

# Validation to prevent 0 only strings
if(inputString == '0'):
    quit()

while inputString != '0':
    # x1, y1, x2, y2, p
    inputList = inputString.split(' ')
    #absolute value = abs()
    xAbs     = abs(float(inputList[0]) - float(inputList[2])) ** float(inputList[4])
    yAbs     = abs(float(inputList[1]) - float(inputList[3])) ** float(inputList[4])
    distance = (xAbs + yAbs) ** (1/float(inputList[4]))
    print(distance)
    inputString = str(input())
