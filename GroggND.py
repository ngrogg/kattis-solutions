#!/usr/bin/python3

inputString = str(input())
inputList   = inputString.split(' ')
validList   = []
repeats     = False

for i in inputList:
    if i in validList:
        repeats = True
    else:
        validList.append(i)

if repeats:
    print("no")
else:
    print("yes")
