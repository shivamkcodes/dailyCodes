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

    in n;
    cin >> n;
    string str;
    // getline(cin, str);
    cin >> str;
    in c = 0;
    for (int i = 0; i < n; i++)
    {
        if (str[i] == 'x' && str[i + 1] == 'x' && str[i + 2] == 'x' && i < n)
        {
            // str.erase(str.begin() + i);
            c++;
        }
    }
    // cout << str << endl;
    // for (int i = 0; i < n; i++)
    // {
    //     if (str[i] == 'x' && str[i + 1] == 'x' && str[i + 2] == 'x' && i < n)
    //     {
    //         str.erase(str.begin() + i);
    //         c++;
    //     }
    // }
    // cout << str << endl;
    cout << c;

    auto end = chrono::steady_clock::now();
    //cout << chrono::duration_cast<chrono::milliseconds>(end - start).count()<<endl;
    return 0;
}