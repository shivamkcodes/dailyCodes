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

    string str1, str2;
    getline(cin, str1);
    for (auto i = 0; i < str1.size();)
    {
        if (str1[i] == '.')
        {
            str2.push_back('0');
            i++;
        }
        else if (str1[i] == '-' && str1[i + 1] == '.' && i < str1.size())
        {
            str2.push_back('1');
            i += 2;
        }
        else if (str1[i] == '-' && str1[i + 1] == '-' && i < str1.size())
        {
            str2.push_back('2');
            i += 2;
        }
    }
    cout << str2;

    auto end = chrono::steady_clock::now();
    //cout << chrono::duration_cast<chrono::milliseconds>(end - start).count()<<endl;
    return 0;
}