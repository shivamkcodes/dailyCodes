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

    in n, money;
    cin >> n >> money;
    set<in> arr;
    for (int i = 0; i < n; i++)
    {
        in k;
        cin >> k;
        arr.insert(k);
    }
    // auto i = arr.begin();
    // while (money > 0 || i != arr.end())
    // {
    //     cout << *i;
    //     i++;
    // }
    // cout << money;
    // for (auto i = arr.begin(); i != arr.end(); i++)
    // {
    //     cout << *i << " ";
    // }
    in c = 0;
    in sum = 0;
    for (auto x : arr)
    {
        if (x <= money)
        {
            sum += x;
            money -= x;
            c++;
        }
    }
    // cout << sum << " " << money << " " << c;
    // if (money == 0)
    // {
    //     /* code */
    cout << c;
    // }
    // else
    // {
    //     cout << c - 1;
    // }

    auto end = chrono::steady_clock::now();
    //cout << chrono::duration_cast<chrono::milliseconds>(end - start).count()<<endl;
    return 0;
}