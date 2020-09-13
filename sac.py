t = int(input())
while t > 0:
    n = int(input())
    l = list(map(int, input().split()))
    p = max(l)
    q = min(l)
    if p == q:
        print(n)
    else:
        print(1)
    t -= 1
