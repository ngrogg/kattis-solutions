# Greetings! by Nicholas Grogg

# Def function to run program
def runProgram():
    # Read in input
    inputString  = str(input())

    # Remove first/last character from string
    inputString  = inputString[1:]
    inputString  = inputString[:-1]

    # Append string to itself to double length
    inputString += inputString

    # Append h/y to new doubled string
    inputString  = 'h' + inputString + 'y'

    # Output string
    print(inputString)

# Run program
runProgram()
