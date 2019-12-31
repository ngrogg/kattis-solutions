#!/usr/bin/python3

numCases = int(input())

for i in range(numCases):
    inputString = str(input())
    inputList   = inputString.split(' ')
    r           = int(inputList[0])
    e           = int(inputList[1])
    c           = int(inputList[2])

    if e-r > c:
        print("advertise")
    elif e-r == c:
        print("does not matter")
    else: # e-r < c
        print("do not advertise")
