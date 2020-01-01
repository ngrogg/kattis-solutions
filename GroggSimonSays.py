#!/usr/bin/python3

iterations = int(input())

for i in range(iterations):
    inputString = str(input())
    inputList   = inputString.split(' ')
    if inputList[0] == 'Simon' and inputList[1] == 'says':
        # Remove 'Simon says' from list
        del inputList[0]
        del inputList[0]
        outputString = " ".join(str(j) for j in inputList)
        print(outputString)
