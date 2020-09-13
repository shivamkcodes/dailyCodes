#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <map>
#include <set>
#include <chrono>
#define in long long
#include <cstring>
using namespace std;

int gcd(int a, int b)
{
    return __gcd(a, b);
}

int lcm(int a, int b)
{
    return (a * b) / __gcd(a, b);
}
int main()
{
    auto start = chrono::steady_clock::now();
    int n;
    cin >> n;
    vector<int> arr;
    for (int i = 1; i <= n; i++)
        // cin >> i;
        arr.push_back(i);

    // for (int x : arr)
    //     cout << x;
    int ans = lcm(arr[0], arr[1]);
    for (int i = 1; i < n; i++)
    {
        ans = lcm(arr[i], ans);
        // cout << ans << " ";
    }
    cout << ans;
    auto end = chrono::steady_clock::now();
    //cout << chrono::duration_cast<chrono::milliseconds>(end - start).count()<<endl;
    return 0;
}