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
        in a, b, c;
        cin >> a >> b >> c;

        in d, e;
        cin >> d >> e;

        in maxi = max(d, e);
        in ans = 0, ans1 = 0, count = 0;

        a = a / 2;

        if (d < e)
            swap(d, e), swap(b, c);
        ans += d * min(a, b);
        a -= min(a, b);
        ans += e * min(a, c);
        cout << ans << endl;

        // cout << (ans1 * d) + (ans * e) << endl;
    }

    return 0;
}