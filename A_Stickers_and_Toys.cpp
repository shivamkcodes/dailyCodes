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
        in a, b, c;
        cin >> a >> b >> c;

        // if (b + c <= a)
        // {
        //     cout << a << endl;
        //     // break;
        // }
        // else if (a == b && b == c && a == c)
        // {
        //     cout << 1 << endl;
        // }

        // else if (a == b || a == c)
        // {
        //     cout << a << endl;
        //     // break;
        // }
        // else
        // {
        //
        // }
        in mi = min(b, c);
        cout << (a - mi) + 1 << endl;
    }

    return 0;
}