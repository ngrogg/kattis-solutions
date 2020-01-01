#!/usr/bin/python3

import math

inputNum = float(input())
value    = (inputNum * 5280/4854) * 1000
value    = str(round(value,0))
print(value[:-2])
