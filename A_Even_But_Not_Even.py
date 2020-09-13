def solve(d):
    sum = 0
    while(d > 0):
        rem = int(d % 10)
        sum += rem
        d = d/10

    if sum % 2 == 0:
        return True
    else:
        return False

    # return sum


def div(d):
    lastDigit = d % 10
    # div = False
    if lastDigit != 0 and lastDigit != 2 and lastDigit != 4 and lastDigit != 6 and lastDigit != 8:
        # div = True
        return True
    else:
        return False


if __name__ == '__main__':

    t = int(input())
    for i in range(0, t):
        n = int(input())
        d = int(input())
        # print(solve(d))

        if div(d) == True and solve(d) == True:
            print(d)
        elif d == 0:
            print(-1)
        else:
            # print("working")
            # solve1(d)
            val = False
            while(d > 0):
                rem = int(d % 10)
                d = int(d/10)
                if rem % 2 != 0:

                    # continue
                    val = True
                    pass
                if val == True:
                    if div(d) == True and solve(d) == True:
                        print(d)

                    break
                    # pass

                    # print(rem, end="")
            # print()
