# FYI By Nicholas Grogg 

# Def function to run program
def runProgram():
    # Read in input
    inputString = str(input())

    # If first three characters in inputString = '555'
    if(inputString[0:3] == '555'):
        print("1")
    else:
        print("0")

# Run program
runProgram()
