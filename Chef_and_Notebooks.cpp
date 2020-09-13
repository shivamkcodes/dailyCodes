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
        int x, y, k, n;
        cin >> x >> y >> k >> n;
        in pages = abs(x - y);
        vector<pair<in, in>> arr(n);
        while (n--)
        {
            in p1, c1;
            cin >> p1 >> c1;
            arr.push_back({p1, c1});
        }
        in c = 0;
        for (auto x : arr)
        {
            if (x.first >= pages && k >= x.second)
            {
                cout << "LuckyChef" << endl;
                break;
            }
            else
            {
                c++;
            }
        }

        if (c == arr.size())
        {
            cout << "UnluckyChef" << endl;
        }
    }
    return 0;
}