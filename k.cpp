#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <map>
#include <unordered_map>
#include <set>
#include <stack>
#include <queue>
// #define in long long
#include <string>
#include <sstream>
using namespace std;

int main()
{

    int x;
    cin >> x;
    bool val = false;
    if (x < 0)
    {
        val = true;
    }

    // string str = to_string(x);
    // auto str = std::to_string(x);
    ostringstream str;

    str << x;

    string str1 = str.str();
    string str2;

    reverse(str1.begin(), str1.end());

    // cout << str1;
    int c = 0;

    for (char i = 0; i < str1.size(); i++)
    {
        if (str1[i] == '0' && c == 0)
        {
        }
        else if (str1[i] == '-')
        {
        }
        else
        {
            str2.push_back(str1[i]);
            c++;
        }
    }

    // cout << str2;
    int m = std::stoi(str2);
    if (val)
    {
        m = m - (2 * m);
    }
    cout << m;

    return 0;
}