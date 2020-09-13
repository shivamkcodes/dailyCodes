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

int main()
{
    auto start = chrono::steady_clock::now();

    int a, b, x;
    cin >> a >> b >> x;
    // vector<int> str(a + b, 0);
    vector<int> str(a + b);

    if (x & 1 && a > b)
    {
        for (int i = 0; i < x / 2; i++)
        {
            cout << "01";
        }
        for (int i = 0; i < a - (x / 2); i++)
        {
            cout << "0";
        }
        for (int i = 0; i < b - (x / 2); i++)
        {
            cout << "1";
        }
    }

    else if (x & 1 && a <= b)
    {
        for (int i = 0; i < x / 2; i++)
        {
            cout << "10";
        }
        for (int i = 0; i < b - (x / 2); i++)
        {
            cout << "1";
        }
        for (int i = 0; i < a - (x / 2); i++)
        {
            cout << "0";
        }
    }

    else if (x % 2 == 0 && a > b)
    {
        for (int i = 0; i < x / 2; i++)
        {
            cout << "01";
        }
        for (int i = 0; i < b - (x / 2); i++)
        {
            cout << "1";
        }
        for (int i = 0; i < a - (x / 2); i++)
        {
            cout << "0";
        }
    }
    else if (x % 2 == 0 && a <= b)
    {
        for (int i = 0; i < x / 2; i++)
        {
            cout << "10";
        }
        for (int i = 0; i < a - (x / 2); i++)
        {
            cout << "0";
        }
        for (int i = 0; i < b - (x / 2); i++)
        {
            cout << "1";
        }
    }
    // str[x - 1] = 1;

    // unordered_map<int, int> mp;
    // for (int i = 0; i < str.size(); i++)
    // {
    //     mp[str[i]]++;
    // }

    // for (auto i = mp.begin(); i != mp.end(); i++)
    // {
    // }
    // int temp = b - 1;
    // for (int i = 0; i < str.size() - 1; i++)
    // {
    //     if ((i != x - 1 || i != x + 1) && temp > 0)
    //     {
    //         str[i] = 1;
    //         temp--;
    //     }
    // }

    // for (int x : str)
    //     cout << x;

    // string str;
    // int m = max(a, b);
    // bool val;
    // if (m == a)
    // {
    //     val = 1;
    // }
    // else if (m == b)
    // {
    //     val = 0;
    // }
    // else
    // {

    // }

    // int acount = 0;
    // int bcount = 0;
    // for (int i = 0; i < x; i++)
    // {
    //     if (val)
    //     {
    //         str.push_back('0');
    //         a--;
    //     }
    //     else
    //     {
    //         str.push_back('1');
    //         b--;
    //     }
    // }
    // while (a--)
    // {
    //     str.push_back('0');
    // }
    // while (b--)
    // {
    //     str.push_back('1');
    // }
    // cout << str;

    auto end = chrono::steady_clock::now();
    //cout << chrono::duration_cast<chrono::milliseconds>(end - start).count()<<endl;
    return 0;
}