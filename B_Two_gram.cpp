#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <map>
#include <set>
#include <chrono>
#include <typeinfo>
#define in long long
#include <cstring>
using namespace std;

string getString(char x)
{

    string s(1, x);

    return s;
}
//well done boi.........
int main()
{
    auto start = chrono::steady_clock::now();

    in n;
    cin >> n;
    string str;
    cin >> str;
    map<string, int> mp;
    for (auto i = 0; i < n - 1; i++)
    {
        string str1 = getString(str[i]);
        string str2 = getString(str[i + 1]);
        str1.append(str2);
        // cout << str1 << endl;
        // cout << typeid(str).name();
        mp[str1]++;
        // cout << str[i] << str[i + 1] << endl;
    }
    // cout << mp[0];
    in max = 0;
    for (auto i = mp.begin(); i != mp.end(); i++)
    {
        // cout << i->first << " " << i->second << endl;
        if (i->second > max)
        {
            max = i->second;
        }
    }
    for (auto i = mp.begin(); i != mp.end(); i++)
    {
        // in max=0;
        // cout << i->first << " " << i->second << endl;
        if (i->second == max)
        {
            cout << i->first;
            break;
        }
    }

    auto end = chrono::steady_clock::now();
    //cout << chrono::duration_cast<chrono::milliseconds>(end - start).count()<<endl;
    return 0;
}