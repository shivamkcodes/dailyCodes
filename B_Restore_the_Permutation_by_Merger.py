t = int(input())
while t != 0:
    n = int(input())
    s = set()
    x = list(map(int, input().split()))
    for item in x:
        s.add(item)

    # s.add(k)
    print(s)
    # for i in s:
    #     print(i, end="")
    print()
    t = t-1
