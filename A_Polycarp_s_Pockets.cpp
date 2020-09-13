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

    int n;
    cin >> n;
    set<int> s;
    vector<int> v(n);
    unordered_map<int, int> mp;
    priority_queue<int> maxh;
    for (int i = 0; i < n; i++)
    {

        // if (s.find(m) == s.end())
        // {
        //     s.insert(m);
        //     v.push_back(m);
        // }
        cin >> v[i];
    }

    for (int i = 0; i < n; i++)
    {
        mp[v[i]]++;
    }
    for (auto i = mp.begin(); i != mp.end(); i++)
    {
        maxh.push(i->second);
        // cout << i->first << " " << i->second << endl;
    }
    cout << maxh.top();

    auto end = chrono::steady_clock::now();
    //cout << chrono::duration_cast<chrono::milliseconds>(end - start).count()<<endl;
    return 0;
}