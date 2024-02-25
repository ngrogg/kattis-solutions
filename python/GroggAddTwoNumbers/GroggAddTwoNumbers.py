#!/usr/bin/python3

# Add Two Numbers
# By Nicholas Grogg

# Function to run program
def runProgram():
    line             = input()
    addVar1, addVar2 = line.split()
    addVar1          = int(addVar1)
    addVar2          = int(addVar2)
    print(addVar1 + addVar2)

# Run main function
runProgram()
