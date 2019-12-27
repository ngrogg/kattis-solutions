#!/usr/bin/python3

days      = int(input())
dayString = str(input())
dayList   = dayString.split(' ')

# Define initial values
earliest  = 0
trash     = int(dayList[0])

for i in range(1, days):
    if int(dayList[i]) < trash:
        earliest = i
        trash    = int(dayList[i])

print(earliest)
