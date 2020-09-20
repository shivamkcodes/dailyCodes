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

    in t;
    cin >> t;
    while (t--)
    {
        in x, y, k;
        cin >> x >> y >> k;

        in c = 0;
        c = k + (k * y) - 1;
        in c1 = k / y;
        in c2 = ceil(c / x);
        // cout << c << endl;
        // if (k & 1)
        // {
        //     cout << c1 + c2 - 1 << endl;
        // }
        // else
        // {
        //     cout << c1 + c2 << endl;
        // }
        cout << c2 + k << endl;
    }

    return 0;
}