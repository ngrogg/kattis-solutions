#!/usr/bin/python3

rows         = int(input())
checkerBoard = []
correctBool  = True

# For row by row
for i in range(rows):
    inputString = str(input())
    inputList   = list(inputString)
    countW      = 0
    sameW       = 0
    countB      = 0
    sameB       = 0
    boardRow    = []

    for j in range(rows):
        if inputList[j] == "B":
            countB += 1
            sameW   = 0
            sameB  += 1
            if sameB >= 3:
                correctBool = False

        if inputList[j] == "W":
            countW += 1
            sameB   = 0
            sameW  += 1
            if sameW >= 3:
                correctBool = False

        boardRow.append(inputList[j])

    checkerBoard.append(boardRow)

    if countW != countB:
        correctBool = False

# While column by column
i = 0
j = 0
while j < rows:
    countB = 0
    sameB  = 0
    countW = 0
    sameW  = 0

    while i < rows:
        if checkerBoard[i][j] == "B":
            countB += 1
            sameW   = 0
            sameB  += 1
            if sameB >= 3:
                correctBool = False

        if checkerBoard[i][j] == "W":
            countW += 1
            sameB   = 0
            sameW  += 1
            if sameW >= 3:
                correctBool = False
        i += 1

    if countW != countB:
        correctBool = False
    j += 1
    i  = 0

if correctBool:
    print("1")
else:
    print("0")
