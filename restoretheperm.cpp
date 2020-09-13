#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <unordered_map>
#include <unordered_set>
#include <set>
#include <chrono>
#define in long long
#include <cstring>
using namespace std;

// void swap(int *x, int *y)
// {
//     int z;
//     z = *x;
//     *x = *y;
//     *y = z;
// }
int main()
{
    auto start = chrono::steady_clock::now();
    in t;
    cin >> t;
    while (t--)
    {
        in n;
        cin >> n;
        vector<in> arr;
        vector<in> arr1;

        unordered_set<in> m;
        unordered_map<in, in> mp;

        for (in i = 0; i < 2 * n; i++)
        {
            in k;
            cin >> k;
            arr.push_back(k);
            m.insert(k);
            // mp[arr[i]]++;
        }

        // for (auto i = mp.begin(); i != mp.end(); i++)
        // {
        //     cout << i->first << " ";
        //     // arr1.push_back(*i);
        // }
        // for (int i = 0; i < 2 * n; i++)
        // {
        //     if (mp[arr[i]] == 2)
        //     {
        //         cout << arr[i] << " ";
        //         mp[arr[i]]--;
        //     }
        // }

        // if (n >= 3)
        // {
        //     /* code */
        //     swap(arr1[n - 1], arr1[n - 2]);
        // }

        // for (auto i = arr1.rbegin(); i != arr1.rend(); i++)
        // {
        //     cout << *i << " ";
        // }

        for (int i = 0; i < n * 2; i++)
        {
            in k;
            cin >> k;
            if (m.find(k) == m.end())
            {
                m.insert(k);
                arr.push_back(k);
            }
        }

        cout << endl;
    }
    auto end = chrono::steady_clock::now();
    //cout << chrono::duration_cast<chrono::milliseconds>(end - start).count()<<endl;
    return 0;
}