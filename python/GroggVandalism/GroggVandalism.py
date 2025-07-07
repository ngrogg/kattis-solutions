#!/usr/bin/python3

# Vandalism
# My solution to the Kattis problem "Vandalism"
# By Nicholas Grogg

# Function to run program
def runProgram():
    ## Define complete string
    completeString="UAPC"

    ## Read in partial string
    partialString = str(input())

    ## Define output string by removing items only in Partial String
    outputString = [Character for Character in completeString if Character not in partialString]

    ## Print output string, additional formatting should only output character
    print("".join(outputString))

# Run main function
runProgram()
