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

    int t;
    cin >> t;
    while (t--)
    {
        vector<int> arr;
        int n;
        cin >> n;
        arr.push_back(1);

        for (int i = 2; i < 2 * n; i++)
        {
            int x = arr.back();
            arr.push_back(i + x);
        }

        auto itr = upper_bound(arr.begin(), arr.end(), n);
        auto itr1 = lower_bound(arr.begin(), arr.end(), n);
        // cout << itr1 - arr.begin() << endl;
        int k = itr - arr.begin();
        int k1 = itr1 - arr.begin();
        // cout << "the value is" << arr[k1 - 1] << endl;

        if (arr[k - 1] == n)
        {
            cout << k << endl;
        }
        else
        {
            int ans = min((n - arr[k1 - 1]), (arr[k - 1] - n));

            cout << "lower bound" << (arr[k1 - 1]) << " " << k1 << endl;
            cout << "upper bound" << (arr[k - 1]) << " " << k << endl;
            // if (ans == (n - arr[k1 - 1]))
            // {

            //     cout << k1 + ans << endl;
            // }
            // else if (ans == (arr[k - 1] - n))
            // {
            //     cout << arr[k - 1] - n << endl;

            //     cout << k + ans << endl;
            // }
        }
    }

    return 0;
}