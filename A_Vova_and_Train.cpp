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
        in a, b, c, d;
        cin >> a >> b >> c >> d;
        in count = a / b;
        in count1 = d / b;
        in count2 = (c - 1) / b;
        in count3 = count1 - count2;

        cout << count - count3 << endl;

        // if (b & 1)
        // {
        //     /* code */
        //     cout << (count - count1) - 1 << endl;
        // }
        // else
        // {
        // }

        // cout << count << " " << count1 << endl;
        // cout << 1 / 51;
    }

    return 0;
}