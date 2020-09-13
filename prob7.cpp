#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <map>
#include <unordered_map>
#include <set>
#include <stack>
#include <queue>
#define in long long
#include <string>
using namespace std;

template <typename Map>
bool map_compare(Map const &lhs, Map const &rhs)
{
    // No predicate needed because there is operator== for pairs already.
    return lhs.size() == rhs.size() && std::equal(lhs.begin(), lhs.end(),
                                                  rhs.begin());
}

int main()
{
    string s, t;
    cin >> s >> t;
    // unordered_map<char, int> mp1;
    // unordered_map<char, int> mp2;

    // for (char x : s)
    //     mp1[x]++;
    // for (char x : t)
    //     mp2[x]++;

    // for (auto i = mp1.begin(), j = mp2.begin(); i != mp1.end(), j != mp2.end(); i++, j++)
    // {
    // }
    // cout << map_compare(mp1, mp2);

    for (char i = 0; i < t.size(); i++)
    {
        if (s[i] != t[i])
        {
            t.erase(t.begin() + i);
        }
    }

    if (s == t)
    {
        cout << true;
    }
    else
    {
        cout << false;
    }

    // cout << t;

    return 0;
}