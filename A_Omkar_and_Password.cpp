#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <map>
#include <unordered_map>
#include <set>
#include <stack>
#include <queue>
#include <chrono>
#define in long long
#include <string>
using namespace std;

bool areSame(vector<in> a, int n)
{
    unordered_map<int, int> m; //hash map to store the frequency od every
                               //element

    for (int i = 0; i < n; i++)
        m[a[i]]++;

    if (m.size() == 1)
        return true;
    else
        return false;
}

int main()
{
    auto start = chrono::steady_clock::now();
    in t;
    cin >> t;
    while (t--)
    {
        in n;
        cin >> n;
        vector<in> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        bool k = areSame(arr, n);
        if (k)
        {
            cout << arr.size() << endl;
        }
        else
        {
            cout << 1 << endl;
        }

        // sort(arr.begin(), arr.end());

        // for (int x : arr)
        //     cout << x << " ";
        // cout << endl;

        // in i = 0;
        // bool val;
        // while (arr.size() > 1 && !areSame(arr, arr.size()))
        // {

        //     for (in i = 0; i < arr.size() - 1; i++)
        //     {

        //         if (!areSame(arr, arr.size()))
        //         {

        //             // cout << "gugu" << endl;
        //             if (arr[i] != arr[i + 1])
        //             {
        //                 // arr.erase(arr[i]);
        //                 in temp = arr[i + 1];
        //                 arr[i] += temp;
        //                 // auto itr = remove(arr.begin(), arr.end(), arr[i]);
        //                 // arr.erase(itr, arr.end());
        //                 arr.erase(arr.begin() + (i + 1));
        //             }
        //         }
        //         // else
        //         // {
        //         //     // cout << "gugu";
        //         //     val = false;
        //         //     break;
        //         // }
        //     }
        //     // if (!val)
        //     // {
        //     //     for (int x : arr)
        //     //         cout << x << " ";
        //     //     break;
        //     // }
        // }

        // cout << arr.size() << endl;

        // cout << endl;

        // cout << !areSame(arr, n);
    }

    auto end = chrono::steady_clock::now();
    //cout << chrono::duration_cast<chrono::milliseconds>(end - start).count()<<endl;
    return 0;
}