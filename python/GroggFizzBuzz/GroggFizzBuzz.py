#!/usr/bin/python3

inputString = str(input())
stringList  = inputString.split(' ')

X = int(stringList[0])
Y = int(stringList[1])
N = int(stringList[2])

for i in range(1,N+1):
    if(i%X == 0 and i%Y == 0):
        print("FizzBuzz")
    elif(i%X == 0):
        print("Fizz")
    elif(i%Y == 0):
        print("Buzz")
    else:
        print(i)
