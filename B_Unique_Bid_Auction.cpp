#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <map>
#include <unordered_map>
#include <unordered_set>
#include <set>
#include <stack>
#include <queue>
#define in long long
#include <string>
using namespace std;

bool isprime(int n)
{
    int flag = 0;
    if (n == 2 || n == 3)
        return true;
    if (n % 2 == 0 || n % 3 == 0)
        return false;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}
int main()
{

    in t;
    cin >> t;
    while (t--)
    {

        int n;
        cin >> n;
        vector<int> arr(n);
        vector<int> brr;
        map<int, int> mp;
        for (int &it : arr)
            cin >> it;

        for (int x : arr)
            // mp.insert(x);
            mp[x]++;

        for (auto x : mp)
        {

            // cout << x.first << " " << x.second << endl;

            if (x.second == 1)
            {
                brr.push_back(x.first);
            }
        }

        // for (int x : brr)
        //     cout << x << " ";

        if (brr.empty())
        {
            cout << -1;
        }
        else
        {
            int val = brr[0];
            auto it = find(arr.begin(), arr.end(), val);
            if (it != arr.end())
            {
                int cal = it - arr.begin();
                cout << cal + 1;
            }
        }

        cout << endl;
    }
    return 0;
}