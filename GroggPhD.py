#!/usr/bin/python3

numTestcases       = int(input())

for i in range(numTestcases):
    # Input string
    inputString    = input()

    # Validation, print skipped
    if (inputString == 'P=NP'):
        print("skipped")

    # Else split, add values and print
    else:
        numbers    = inputString.split('+')
        sumNum     = int(numbers[0]) + int(numbers[1])
        print(sumNum)
