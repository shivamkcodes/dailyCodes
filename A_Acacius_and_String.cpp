#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <map>
#include <set>
#include <chrono>
#define in long long
#include <cstring>
using namespace std;

int main()
{
    string mstr = "abacaba";
    auto start = chrono::steady_clock::now();
    in t;
    cin >> t;

    while (t--)
    {
        in n;
        cin >> n;
        string str;
        cin >> str;
        // for (int i = 0; i < n; i++)
        // {
        //     if (str[i] == '?')
        //     {
        //         str[i] = 'a';
        //     }
        // }
        // cout << str;
        // size_t found = str.find(mstr);
        // if (found != string::npos && found <= n - 7)
        // {
        //     // cout << "First occurrence is " << found << endl;
        //     cout << "Yes";
        // }
    }
    auto end = chrono::steady_clock::now();
    //cout << chrono::duration_cast<chrono::milliseconds>(end - start).count()<<endl;
    return 0;
}