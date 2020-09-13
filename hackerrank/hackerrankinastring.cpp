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

    map<char, int> m;
    map<char, int> m1;
    string str1 = "hackerrank";
    string str;
    // string str2;
    vector<char> arr;
    // getline(cin, str);
    getline(cin, str);

    for (char x : str)
        m[x]++;

    // int c = 0;
    // cout << c;

    for (char i = 0; i < str.size(); i++)
    {
        if (str[i] == 'h' || str[i] == 'a' || str[i] == 'c' || str[i] == 'k' || str[i] == 'e' || str[i] == 'r' || str[i] == 'n')
        {
            arr.push_back(str[i]);
            // str2.append(str1[i]);
        }
    }
    for (char x : arr)
        cout << x;

    return 0;
}