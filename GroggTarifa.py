#!/usr/bin/python3

megs      = int(input())
months    = int(input())
nextMonth = megs

for i in range(months):
    used       = int(input())
    nextMonth += megs - used 

print(nextMonth)
