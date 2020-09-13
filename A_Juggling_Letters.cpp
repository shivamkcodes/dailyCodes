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

int main()
{

    in t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        in temp = n;
        unordered_map<char, int> mp;
        while (n--)
        {
            string str;
            cin >> str;
            for (char i = 0; i < str.size(); i++)
            {
                mp[str[i]]++;
            }
        }
        in c = 0;
        for (auto x : mp)
        {
            if (x.second % temp == 0)
            {
                // cout << x.second << " " << temp << endl;
                c++;
            }
            else
            {
                break;
            }
            // cout << x.first << " " << x.second << endl;
        }
        if (c == mp.size())
        {
            cout << "YES" << endl;
            // cout << mp.size();
        }
        else
        {
            cout << "NO" << endl;
        }

        // cout << endl;
    }
    return 0;
}