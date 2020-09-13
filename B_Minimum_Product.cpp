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

        in a, b, x, y, n;
        cin >> a >> b >> x >> y >> n;

        in mina = abs(a - x);
        in minb = abs(b - y);
        in val1 = INT64_MAX, val2 = INT64_MAX;
        if (mina >= n)
        {
            val1 = (a - n) * b;
        }
        else if (minb >= n)
        {
            val2 = (b - n) * a;
        }

        cout << min(val1, val2) << endl;
    }
    return 0;
}