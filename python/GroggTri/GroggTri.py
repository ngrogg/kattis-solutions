#!/usr/bin/python3

import math

inputString = str(input())
inputList   = inputString.split(' ')
solution    = ""
a           = int(inputList[0])
b           = int(inputList[1])
c           = int(inputList[2])

# First check for a +-*/ b = c 
if a + b == c:
    solution = inputList[0] + "+" + inputList[1] + "=" + inputList[2]
elif a - b == c:
    solution = inputList[0] + "-" + inputList[1] + "=" + inputList[2]
elif a * b == c:
    solution = inputList[0] + "*" + inputList[1] + "=" + inputList[2] # Could it be "x"?
elif a / b == c:
    solution = inputList[0] + "/" + inputList[1] + "=" + inputList[2]

# Then check for a = b +-*/ c
elif b + c == a:
    solution = inputList[0] + "=" + inputList[1] + "+" + inputList[2]
elif b - c == a:
    solution = inputList[0] + "=" + inputList[1] + "-" + inputList[2]
elif b * c == a:
    solution = inputList[0] + "=" + inputList[1] + "*" + inputList[2] # Could it be "x"?
elif b / c == a: 
    solution = inputList[0] + "=" + inputList[1] + "/" + inputList[2]
else: # Should not get here
    quit()

print(solution)
