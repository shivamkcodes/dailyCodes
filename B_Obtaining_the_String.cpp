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

bool check(string str, string str1)
{
    if (str == str1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    auto start = chrono::steady_clock::now();

    in n;
    cin >> n;
    string str, str1;
    cin >> str >> str1;

    // cout << str << " " << str1;
    unordered_map<char, int> mp1;
    unordered_map<char, int> mp2;

    for (char i = 0; i < n; i++)
    {
        mp1[str[i]]++;
        mp2[str1[i]]++;
    }
    int c = 0;
    for (auto i = mp1.begin(), j = mp2.begin(); i != mp1.end(), j != mp2.end(); i++, j++)
    {
        // cout << i->first << " " << i->second << endl;
        // cout << j->first << " " << j->second << endl;
        if (i->first == j->first && i->second == j->second)
        {
        }
        else
        {
            c++;
        }
    }

    // for (auto x : mp1)
    //     cout << x.first << " " << x.second << endl;
    // for (auto x : mp2)
    //     cout << x.first << " " << x.second << endl;

    // cout << c;
    if (c > 0)
    {
        cout << "-1" << endl;
        exit(0);
    }

    vector<int> brr;

    while (str != str1)
    {
        /* code */

        for (int i = 0; i < n - 1; i++)
        {
            if (str[i] != str1[i])
            {
                // str[i] = str[i + 1];
                swap(str[i], str[i + 1]);
                brr.push_back(i + 1);
            }
        }
    }
    // cout << str;
    cout << brr.size() << endl;
    for (int x : brr)
        cout << x << " ";

    auto end = chrono::steady_clock::now();
    //cout << chrono::duration_cast<chrono::milliseconds>(end - start).count()<<endl;
    return 0;
}