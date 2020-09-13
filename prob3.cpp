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

int main()
{
    auto start = chrono::steady_clock::now();

    in n;
    cin >> n;
    vector<in> arr(n);
    vector<in> brr(100, 0);
    vector<in> crr;

    priority_queue<pair<in, pair<in, in>>> maxh;
    // map<in, in> mp;
    // in mi = INT64_MAX;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        // in m;
        // cin >> m;
        // arr.push_back(m);
        // if (m < min)
        // {
        //     min = m;
        // }
        // mi = min(mi, m);
    }

    // cout << mi << " ";

    for (int i = 0; i < n; i++)
    {
        // mp[arr[i]]++;
        brr[arr[i]]++;
    }

    // int j = 0;

    for (int i = 0; i < brr.size();)
    {
        // cout << x.first << " " << x.second << endl;
        if (brr[i] == 1)
        {
            crr.push_back(i);
            in beg = i;
            while (brr[beg] == 1)
            {
                /* code */
                beg++;
                // continue;
            }
            if (brr[beg] == 0)
            {
                crr.push_back(beg - 1);
            }
            i += beg;
        }
        else
        {
            i++;
        }

        // cout << x << " ";
    }
    for (int i = 0; i < crr.size() - 1; i += 2)
    {
        in diff = crr[i + 1] - crr[i];
        maxh.push(make_pair(diff, make_pair(crr[i], crr[i + 1])));
    }

    cout << maxh.top().second.first << "  ";
    cout << maxh.top().second.second;
    // for (int x : crr)
    //     cout << x << " ";

    // cout << endl;

    // while (maxh.size() > 0)
    // {
    //     /* code */
    //     cout << maxh.top().first << "    ";
    //     cout << maxh.top().second.first << "  ";
    //     cout << maxh.top().second.second;
    //     maxh.pop();
    // }

    auto end = chrono::steady_clock::now();
    //cout << chrono::duration_cast<chrono::milliseconds>(end - start).count()<<endl;
    return 0;
}
// 1 11 3 0 15 5 2 4 10 7 12 6

// 8
// 1 2 5 6 7 8 12 36