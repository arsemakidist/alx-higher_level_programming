#!/usr/bin/python3
def uppercase(str):
    for i in str:
        if ord(i) >= ord('a') and ord(i) < ord('z') + 1:
            i = chr(ord(i) - 32)
        print('{:s}'.format(i), end="")
     rint()