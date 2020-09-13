#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <map>
#include <set>
#include <queue>
#include <chrono>
#define in long long
#include <string>
using namespace std;

int main()
{
    auto start = chrono::steady_clock::now();
    in t;
    cin >> t;

    while (t--)
    {
        in n, a, d;
        cin >> n >> a >> d;
        in ans = 0;
        if (n == 1)
        {
            cout << a << endl;
            // exit(0);
        }
        else
        {
            ans = a;
            // arr.
            in sum = a;
            vector<int> arr;
            arr.push_back(ans);
            for (int i = 1; i < n; i++)
            {
                ans += d;
                sum += ans;
                // cout << sum << " ";
                // arr.push_back(ans);
            }
            // cout << ans;
            // for (int x : arr)
            //     // cout << x << endl;
            //     sum += x;
            cout << sum << endl;
        }
    }

    auto end = chrono::steady_clock::now();
    //cout << chrono::duration_cast<chrono::milliseconds>(end - start).count()<<endl;
    return 0;
}