#!/usr/bin/python3

# Adding Trouble
# Solution to the Kattis problem "Adding Trouble"
# By Nicholas Grogg

# Function to run program
def runProgram():
    ## Read in input
    inputLine                     = input()
    ## Split input to variables by space
    firstNum, secondNum, thirdNum = inputLine.split()
    ## Cast to int
    firstNum                      = int(firstNum)
    secondNum                     = int(secondNum)
    thirdNum                      = int(thirdNum)

    ## If firstNum + secondNum = thirdNum output Correct
    if firstNum + secondNum == thirdNum:
        print("correct!")
    ## Else output Wrong
    else:
        print("wrong!")

# Run main function
runProgram()
