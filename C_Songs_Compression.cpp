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
    in n, sum;
    cin >> n >> sum;
    vector<int> brr;
    // map<int, int, greater<int>> mp;
    vector<pair<int, int>> v;
    for (int i = 0; i < n; i++)
    {
        int j, l;
        cin >> j >> l;
        v.push_back({j, l});
        brr.push_back(l);
    }

    sort(v.begin(), v.end());
    int s = 0;
    for (auto x : brr)
        s += x;

    if (s > sum)
    {
        cout << "-1";
        exit(0);
    }

    int ans = 0;
    int itr = 1;

    while (1)
    {
        /* code */
        in tempsum = 0;

        for (auto i = v.begin(); i != v.end() - itr; i++)
        {
            // cout << i->first;
            tempsum += i->first;
        }
        for (auto i = v.end() - itr; i != v.end(); i++)
        {
            // cout << i->first;
            tempsum += i->second;
        }
        if (tempsum < sum)
        {
            cout << itr;
            exit(0);
        }
        else
        {
            itr++;
        }
        // cout << tempsum;
    }

    auto end = chrono::steady_clock::now();
    //cout << chrono::duration_cast<chrono::milliseconds>(end - start).count()<<endl;
    return 0;
}