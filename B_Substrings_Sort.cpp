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

// Returns true if s1 is substring of s2
bool isSubstring(string s1, string s2)
{
    int M = s1.length();
    int N = s2.length();

    /* A loop to slide pat[] one by one */
    for (int i = 0; i <= N - M; i++)
    {
        int j;

        /* For current index i, check for 
 pattern match */
        for (j = 0; j < M; j++)
            if (s2[i + j] != s1[j])
                break;

        if (j == M)
            return 1;
    }

    return 0;
}

int main()
{
    auto start = chrono::steady_clock::now();

    in n;
    cin >> n;
    // set<string> st;
    multimap<int, string> mp;
    vector<string> v;
    bool ret;
    for (int i = 0; i < n; i++)
    {
        string str;
        cin >> str;
        // mp[str.size()] = str;
        mp.insert({str.size(), str});
        // st.insert(str);
    }
    for (auto i = mp.begin(); i != mp.end(); i++)
    {
        // cout << i->second << endl;
        v.push_back(i->second);
    }

    for (int i = 1; i < v.size(); i++)
    {

        string str1 = v[i - 1];
        string str2 = v[i];
        // cout << str1 << "  " << str2 << endl;
        // cout << v[i];
        ret = (isSubstring(str1, str2));
        if (ret)
        {
            ret = 1;
        }
        else
        {
            ret = 0;
            cout << "NO";
            break;
        }
        // cout << ret;
    }
    if (ret)
    {
        cout << "YES" << endl;
        for (auto i = mp.begin(); i != mp.end(); i++)
        {
            cout << i->second << endl;
            // v.push_back(i->second);
        }
    }

    // cout
    auto end = chrono::steady_clock::now();
    //cout << chrono::duration_cast<chrono::milliseconds>(end - start).count()<<endl;
    return 0;
}