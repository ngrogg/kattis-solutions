#!/usr/bin/python3

inputString = str(input())
inputList   = inputString.split(' ')
actualList  = [1,1,2,2,2,8]
outputList  = []

for i in range(len(actualList)):
    value = actualList[i] - int(inputList[i])
    outputList.append(str(value))

print(outputList[0] + " " + outputList[1] + " " + outputList[2] + " " + 
      outputList[3] + " " + outputList[4] + " " + outputList[5])
