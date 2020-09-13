#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <map>
#include <unordered_map>
#include <unordered_set>
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

    int n, k;
    cin >> n >> k;
    string str;
    cin >> str;
    string str2;
    unordered_map<char, int> mp;
    for (auto x : str)
        mp[x]++;

    int c = 0;
    for (auto x : mp)
    {
        if (x.second == 1)
        {
            c++;
        }

        str2.push_back(x.first);
        // cout << x.first << " " << x.second << endl;
    }

    // reverse(str2.begin(), str2.end());
    if (c == str.size())
    {
        while (k--)
        {
            cout << str;
            // cout << "GUGY";
        }
    }
    else
    {
        cout << str;
        while (--k)
        {
            cout << str2;
        }
    }
    // cout << str2;

    auto end = chrono::steady_clock::now();
    //cout << chrono::duration_cast<chrono::milliseconds>(end - start).count()<<endl;
    return 0;
}