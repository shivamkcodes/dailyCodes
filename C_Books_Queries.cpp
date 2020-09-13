#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <map>
#include <unordered_map>
#include <set>
#include <stack>
#include <queue>
#include <deque>
#define in long long
#include <string>
using namespace std;

int main()
{
    in n;
    cin >> n;

    vector<pair<char, int>> v;
    for (int i = 0; i < n; i++)
    {

        char c;
        cin >> c;
        int m;
        cin >> m;
        v.push_back({c, m});
    }

    // for (auto x : v)
    //     cout << x.first << " " << x.second << endl;

    deque<int> q;

    for (auto i = v.begin(); i != v.end(); i++)
    {
        if (i->first == 'L')
        {

            q.push_front(i->second);
        }
        else if (i->first == 'R')
        {
            q.push_back(i->second);
        }
        else if (i->first == '?')
        {

            auto it = find(q.begin(), q.end(), i->second);
            int k = q.size() - ((it - q.begin() + 1));
            int k1 = (it - q.begin() + 1) - 1;

            cout << min(k, k1) << endl;
        }
    }

    // for (auto x : q)
    //     cout << x << " ";

    return 0;
}