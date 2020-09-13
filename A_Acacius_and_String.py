

n = int(input())
x = list(map(str, input().split()))
# str = input()
for i in range(len(x)):
    print(i)
    if(x[i] == '?'):
        x[i] = 'a'
print(x)
