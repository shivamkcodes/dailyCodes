#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <map>
#include <set>
#include <chrono>
#define in long long
#include <string>
using namespace std;

int main()
{
    auto start = chrono::steady_clock::now();
    int q;
    cin >> q;
    map<string, int> mp;
    for (int i = 0; i < q; i++)
    {
        int x;
        cin >> x;
        if (x == 1)
        {
            string str;
            cin >> str;
            int n;
            cin >> n;
            auto itr = mp.find(str);
            if (itr != mp.end())
            {

                // int temp = mp[str];

                mp[str] += (n);
                // cout << temp << " " << n;
            }
            else
            {
                // mp.insert(make_pair(str, n));
                // cout << "0";
                mp[str] = n;
            }
            // mp.insert({str, n});
        }
        else if (x == 2)
        {
            string str;
            cin >> str;
            mp.erase(str);
        }
        else if (x == 3)
        {
            string str;
            cin >> str;
            // auto itr = mp.find(str);
            // if (itr != mp.end())
            // {
            //     cout << mp[str] << endl;
            // }
            // else
            // {
            //     cout << "0";
            // }
            cout << mp[str] << endl;
        }
    }

    auto end = chrono::steady_clock::now();
    //cout << chrono::duration_cast<chrono::milliseconds>(end - start).count()<<endl;
    return 0;
}