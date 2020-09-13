def fact(n):
    if n <= 1:
        return 1
    return n*fact(n-1)


if __name__ == '__main__':
    t = int(input())
    while(t):
        n = int(input())
        print(fact(n))
        t -= 1
