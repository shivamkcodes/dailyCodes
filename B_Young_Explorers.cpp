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

    in t;
    cin >> t;
    while (t--)
    {
        in n;
        cin >> n;
        vector<in> arr;
        for (in i = 0; i < n; i++)
        {
            in k;
            cin >> k;
            arr.push_back(k);
        }
        sort(arr.begin(), arr.end());
        //     for (in x : arr)
        //         cout << x << endl;
        // }
        map<in, in> mp;
        in numberOfgroups = 0;
        for (in i = 0; i < n; i++)
        {
            mp[arr[i]]++;
        }
        for (auto i = mp.begin(); i != mp.end(); i++)
        {
            // cout << i->first << "  " << i->second << endl;
            in f = i->first;
            in s = i->second;
            // cout << f << "  " << s << endl;
            if (f <= s)
            {

                numberOfgroups++;
            }
        }
        cout << numberOfgroups << endl;
    }
    auto end = chrono::steady_clock::now();
    //cout << chrono::duration_cast<chrono::milliseconds>(end - start).count()<<endl;
    return 0;
}