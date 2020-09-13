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

//x*y=lcm(x,y)*hcf(x,y)

int gcd(int x, int y)
{
    return __gcd(x, y);
}
int lcm(int x, int y)
{
    return (x * y) / gcd(x, y);
}
int lcmofarray(vector<in> arr)
{
    int ans = arr[0];
    for (int i = 0; i < arr.size() - 1; i++)
    {
        ans = lcm(arr[i], arr[i + 1]);
    }
    return ans;
}
int hcfofarray(vector<in> arr)
{
    int ans = arr[0];
    for (int i = 1; i < arr.size(); i++)
    {
        ans = gcd(arr[i], ans);
        if (ans == 1)
        {
            return 1;
        }
    }
    return ans;
}

int main()
{
    auto start = chrono::steady_clock::now();

    in n, m;
    cin >> n >> m;
    vector<in> arr;
    vector<in> brr;
    for (int i = 0; i < n; i++)
    {
        in k;
        cin >> k;
        arr.push_back(k);
        // cin >> arr[i];
        // arr.p
    }
    for (int i = 0; i < m; i++)
    {
        in k;
        cin >> k;
        brr.push_back(k);
        // cin >> brr[i];
        // arr.p
    }
    // for (int x : arr)
    //     cout << x;
    // for (int x : brr)
    //     cout << x;

    // cout << gcd(16, 32);
    // cout << gcd(96, 32);
    // cout << lcm(4, 13);
    in e = hcfofarray(brr);
    // cout << lcmofarray(brr);
    // cout << hcfofarray(arr);
    in s = lcmofarray(arr);
    in c = 0;
    for (int i = s; i <= e; i++)

    {
        if (i % s == 0 && e % i == 0)
        {
            // cout << i;
            c++;
        }
    }
    cout << c;

    auto end = chrono::steady_clock::now();
    //cout << chrono::duration_cast<chrono::milliseconds>(end - start).count()<<endl;
    return 0;
}