#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <map>
#include <set>
#include <stack>
#include <queue>
#include <chrono>
#define in long long
#include <string>
using namespace std;

int main()
{
    auto start = chrono::steady_clock::now();
    in n;
    cin >> n;
    // vector<pair<int,int>>arr;
    vector<int> arr(n);
    vector<int> brr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        cin >> brr[i];
    }

    // for (int x : arr)
    //     cout << x << " ";

    in c1a = count(arr.begin(), arr.end(), 1);
    in c0a = n - c1a;
    in c1b = count(brr.begin(), brr.end(), 1);
    in c0b = n - c1b;

    in ans = 0;
    if (c1a > c0a)
    {
        ans += c0a;
    }
    else if (c0a >= c1a)
    {
        ans += c1a;
    }
    if (c1b > c0b)
    {
        ans += c0b;
    }
    else if (c0b >= c1b)
    {
        ans += c1b;
    }

    // cout << c1a << " " << c1b;
    cout << ans;

    auto end = chrono::steady_clock::now();
    //cout << chrono::duration_cast<chrono::milliseconds>(end - start).count()<<endl;
    return 0;
}