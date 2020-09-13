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

int main()
{
    auto start = chrono::steady_clock::now();

    // for (int i = 1; i <= n; i = i + 2)
    // {
    //     arr.push_back(i);
    // }
    // for (int i = 2; i <= n; i = i + 2)
    // {
    //     arr.push_back(i);
    // }
    // for (int x : arr)
    //     cout << x;

    // in n, k;
    // cin >> n >> k;
    // vector<in> arr;

    // in div = n / 2;
    // in div1;
    // if (n & 1)
    // {
    //     div1 = ceil(div);
    // }
    // if (k < div)
    // {
    //     // move to odd side

    //     int i = 1;
    //     for (; i <= div1; i = i + 2)
    //     {
    //         if (i == k)
    //         {
    //             break;
    //         }
    //     }
    //     cout << i + 2;

    //     // for (int i = 1; i <= n; i = i + 2)
    //     // {
    //     //     arr.push_back(i);
    //     // }
    // }
    // else
    // {
    //     //move to even side
    //     int i = 2;
    //     for (; i < div; i = i + 2)
    //     {
    //     }
    //     cout << i + 2;
    //     // for (int i = 2; i <= n; i = i + 2)
    //     // {
    //     //     arr.push_back(i);
    //     // }
    // }
    //     #include<iostream>
    // using namespace std;
    // int main()
    // {
    in n, k, div = 0;
    cin >> n >> k;
    if (n % 2 == 0)
    {
        div = n / 2;
    }
    else
    {
        div = (n / 2) + 1;
    }

    if (k <= div)
        cout << (2 * k) - 1 << endl;
    else
        cout << 2 * (k - div) << endl;

    // cout << arr[k - 1];
    auto end = chrono::steady_clock::now();
    //cout << chrono::duration_cast<chrono::milliseconds>(end - start).count()<<endl;
    return 0;
}