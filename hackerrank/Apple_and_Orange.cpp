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

    in s, t;
    in a, b;
    in m, n;
    cin >> s >> t;
    vector<int> brr;
    for (in i = s; i <= t; i++)
    {
        brr.push_back(i);
    }

    cin >> a >> b;
    cin >> m >> n;
    vector<int> arr;
    vector<int> arr1;
    for (in i = 0; i < m; i++)
    {
        in k;
        cin >> k;
        if (k >= 0)
        {
            /* code */
            arr.push_back(k + a);
        }
    }
    for (in i = 0; i < n; i++)
    {
        in k;
        cin >> k;
        if (k <= 0)
        {
            /* code */
            arr1.push_back(k + b);
        }
    }
    in c = 0;
    for (in i = 0; i < arr.size(); i++)
    {
        bool res = binary_search(brr.begin(), brr.end(), arr[i]);
        if (res == 1)
        {
            // cout<<"gugu";
            c++;
        }
    }
    in c1 = 0;
    for (in i = 0; i < arr1.size(); i++)
    {
        bool res = binary_search(brr.begin(), brr.end(), arr1[i]);
        if (res == 1)
        {
            // cout<<"gugu";
            c1++;
        }
    }
    cout << c << endl;
    cout << c1 << endl;

    auto end = chrono::steady_clock::now();
    //cout << chrono::duration_cast<chrono::milliseconds>(end - start).count()<<endl;
    return 0;
}