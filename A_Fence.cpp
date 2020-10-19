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

        d = max(a, max(b, c));
        d += 1;
        // while (d == a || d == b || d == c)
        // {
        //     d++;
        // }
        // d = a + b + c;

        cout << d << endl;
    }

    return 0;
}