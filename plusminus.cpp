#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <map>
#include <set>
#define in long long
#include <cstring>
using namespace std;

// res = 0
// for init = 0 to inf
//     cur = init
//     ok = true
//     for i = 1 to |s|
//         res = res + 1
//         if s[i] == '+'
//             cur = cur + 1
//         else
//             cur = cur - 1
//         if cur < 0
//             ok = false
//             break
//     if ok
//         break
int main()
{
    string str;
    cin >> str;
    int res = 0;
    while (1)
    {
        int init = 0;
        int cur = init;
        bool ok = 1;
        for (int i = 0; i < str.size(); i++)
        {
            res = res + 1;
            if (str[i] == '+')
                cur = cur + 1;
            else
                cur = cur - 1;
            if (cur < 0)
            {
                ok = 0;
                break;
            }
        }

        if (ok)
        {
            break;
        }
    }
    cout << res;

    return 0;
}