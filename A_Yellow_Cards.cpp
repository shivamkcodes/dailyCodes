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

    in a1, b1, k1, k2, n;
    cin >> a1 >> b1 >> k1 >> k2 >> n;

    in amax, bmax;
    amax = a1 * k1;
    bmax = b1 * k2;
    in val, val1;
    in mal, mal1;

    in minu = min(a1, b1);
    in maxu = max(amax, bmax);

    in remaining = n - minu;
    in remaining1 = n - maxu;

    if (minu == a1)
    {
        val = remaining / k2;
        val1 = a1;
    }
    else if (minu == b1)
    {
        val = remaining / k1;
        val1 = b1;
        // cout << "b vala " << endl;
    }

    in sam = 0;
    in low = a1 * (k1 - 1) + b1 * (k2 - 1);
    cout << max(n - low, sam);
    // cout<<n-low;

    if (minu > n)
    {
        val = 0;
        val1 = 0;
    }

    cout << " " << val1 + val;

    return 0;
}