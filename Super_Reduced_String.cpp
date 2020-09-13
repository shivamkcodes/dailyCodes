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

    string str;
    cin >> str;
    // cout << str;
    in n = str.size();
    for (int i = 1; i < n; i++)
    {
        if (str[i] == str[i - 1])
        {
            // cout << str[i] << " " << str[i - 1];
            str.erase(i - 1, i);
        }
    }
    cout << str;
    auto end = chrono::steady_clock::now();
    //cout << chrono::duration_cast<chrono::milliseconds>(end - start).count()<<endl;
    return 0;
}