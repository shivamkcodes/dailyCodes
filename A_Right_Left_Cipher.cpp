#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <map>
#include <unordered_map>
#include <set>
#include <stack>
#include <queue>
#define in long long
#include <string>
using namespace std;

int main()
{

    string str, str1;
    cin >> str;
    int n = str.size();
    // str1.append(str[n / 2]);

    if (n & 1)
    {

        for (char i = n - 1; i >= (n / 2); i--)
        {

            str1.push_back(str[n - i - 1]);
            str1.push_back(str[i]);
        }
        str1.pop_back();
    }
    else
    {

        for (char i = n - 1; i >= n / 2; i--)
        {

            str1.push_back(str[i]);
            str1.push_back(str[n - i - 1]);
        }
    }
    reverse(str1.begin(), str1.end());
    cout << str1;

    return 0;
}