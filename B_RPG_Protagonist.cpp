#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <map>
#include <unordered_map>
#include <set>
#include <stack>
#include <queue>
#define in long long
#include <string>
using namespace std;

int main()
{

    in n;
    cin >> n;

    while (n--)
    {
        /* code */

        in s, b;
        cin >> s >> b;
        in cs, ca;
        cin >> cs >> ca;
        in ws, wa;
        cin >> ws >> wa;

        in pow = s + b;
        in gpow = (cs * ws) + (ca * wa);
        in ans, val, diff;
        ans = 0;
        if (pow > gpow)
        {
            ans = cs + ca;
        }
        else
        {

            if (ws <= wa)
            {
                if ((cs * ws) <= pow)
                {

                    ans += cs;
                    val = (cs * ws);
                    diff = pow - val;

                    ans += (diff / wa);
                }
            }
            else if (wa < ws)
            {
                if ((ca * wa) <= pow)
                {
                    ans += ca;
                    val = (ca * wa);
                    diff = pow - val;
                    ans += (diff / ws);
                    /* code */
                }
            }
            else
            {
                ans = 0;
            }
        }

        cout << ans << endl;
    }
    return 0;
}