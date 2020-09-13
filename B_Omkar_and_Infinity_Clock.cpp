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

    in t;
    cin >> t;
    while (t--)
    {
        in n, k;
        cin >> n >> k;
        vector<in> arr;
        vector<in> brr(n);
        // int max = 0;
        for (int i = 0; i < n; i++)
        {
            in m;
            cin >> m;
            arr.push_back(m);
            // if (m > max)
            // {
            //     max = m;
            // }
        }

        in max = *max_element(arr.begin(), arr.end());

        for (int i = 0; i < n; i++)
        {
            arr[i] = max - arr[i];
        }

        max = *max_element(arr.begin(), arr.end());

        for (int i = 0; i < n; i++)
        {
            brr[i] = max - arr[i];
        }

        // while (k--)
        // {
        //
        // }

        if (k & 1)
        {
            /* code */
            for (int x : arr)
                cout << x << " ";
            cout << endl;
        }
        else
        {
            for (int x : brr)
                cout << x << " ";
            cout << endl;
        }
    }

    auto end = chrono::steady_clock::now();
    //cout << chrono::duration_cast<chrono::milliseconds>(end - start).count()<<endl;
    return 0;
}