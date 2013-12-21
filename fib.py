#!/usr/bin/python
from sys import argv
from datetime import datetime

def fib(n):
    SZ = 2**32

    i = 0
    a, b = 1, 0
    while i < n:
        t = b
        b = (a+b) % SZ
        a = t
        i += 1

    return b

if __name__ == '__main__':
    t1 = datetime.now()
    print fib(int(argv[1]))

    t2 = datetime.now()
    print ( t2-t1 ).seconds