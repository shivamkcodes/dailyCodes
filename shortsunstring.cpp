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
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {

        string str;
        string str1;
        cin >> str;
        if (str.size() == 2)
        {
            cout << str << endl;
        }

        else
        {
            cout << str[0];
            for (int i = 1; i < str.size() - 1; i = i + 2)
            {
                cout << str[i];
            }
            cout << str[str.size() - 1] << endl;
        }
        // cout << str1;
    }
    return 0;
}