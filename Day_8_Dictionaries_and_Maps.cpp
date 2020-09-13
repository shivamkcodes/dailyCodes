#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <map>
#include <unordered_map>
#include <set>
#include <chrono>
#define in long long
#include <string>
using namespace std;

int main()
{
    auto start = chrono::steady_clock::now();

    in n;
    cin >> n;
    unordered_map<string, int> mp;
    for (int i = 0; i < n; i++)
    {
        string str;
        in val;
        cin >> str >> val;
        mp[str] = val;
    }

    for (int i = 0; i < n; i++)
    {
        string str;
        cin >> str;
        if (mp.find(str) == mp.end())
        {
            cout << "Not found" << endl;
        }
        else
        {
            cout << str << "=" << mp[str] << endl;
        }
    }

    // for (auto i = mp.begin(); i != mp.end(); i++)
    // {
    // cout << i->first << " " << i->second;
    // cout << endl;

    // }

    auto end = chrono::steady_clock::now();
    //cout << chrono::duration_cast<chrono::milliseconds>(end - start).count()<<endl;
    return 0;
}