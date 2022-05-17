#!/usr/bin/python3

inputString = str(input())
inputList   = list(inputString)
hissBool    = False

for i in range(len(inputList)-1):
    if inputList[i] == "s" and inputList[i + 1] == "s":
        hissBool = True

if hissBool:
    print("hiss")
else:
    print("no hiss")
