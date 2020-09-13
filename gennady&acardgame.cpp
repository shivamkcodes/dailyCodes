#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <map>
#include <set>
#define in long long
#include <cstring>
using namespace std;

int main()
{
    string str;
    cin >> str;
    vector<string> arr;
    string char1 = str.substr(0, 1);
    string char2 = str.substr(1, 2);
    for (int i = 0; i < 5; i++)
    {
        string k;
        cin >> k;

        arr.push_back(k);
    }
    // for (auto x : arr)
    //     cout << x << " ";
    // cout << str.substr(0, 1);
    // cout << str.substr(1, 2);
    int c = 0;
    for (int i = 0; i < 5; i++)
    {
        string kchar1 = arr[i].substr(0, 1);
        string kchar2 = arr[i].substr(1, 2);
        if (char1 == kchar1 || char2 == kchar2)
        {
            c++;
        }
    }
    if (c == 0)
    {
        cout << "NO";
    }
    else
    {
        cout << "YES";
    }

    // cout << c;

    return 0;
}