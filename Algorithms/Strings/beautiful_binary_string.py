#!/bin/python

import sys


n = int(raw_input().strip())
B = raw_input().strip()
i=-3
count=0
while True:
    i = B.find('010',i+1)
    if i != -1:
        count+=1
    else:
        break
print (count)        