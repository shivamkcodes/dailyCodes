# res = 0
# for init = 0 to inf
#     cur = init
#     ok = true
#     for i = 1 to |s|
#         res = res + 1
#         if s[i] == '+'
#             cur = cur + 1
#         else
#             cur = cur - 1
#         if cur < 0
#             ok = false
#             break
#     if ok
#         break

s = input()
res = 0
init = 0
while(True):
    cur = init
    ok = True
    for i in range(len(s)):
        res = res+1
        if s[i] == '+':
            cur = cur + 1
        else:
            cur = cur - 1
        if cur < 0:
            ok = False
            break

    if ok:
        break
print(res)
