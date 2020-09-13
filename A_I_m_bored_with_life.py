import math


def fact(n):
    if(n < 2):
        return 1
    else:
        return n*fact(n-1)


def computeGCD(x, y):

    while(y):
        x, y = y, x % y

    return x


a, b = [int(x) for x in input().split()]
# a = int(input())
# b = int(input())


x = fact(a)
y = fact(b)

print(computeGCD(x, y))
