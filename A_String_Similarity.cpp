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

    in t;
    cin >> t;
    while (t--)
    {
        /* code */

        int n;
        cin >> n;
        // vector<int> arr(n);
        // for (int &it : arr)
        // cin >> it;

        string str, str1;
        cin >> str;

        for (char i = 0; i < str.size(); i += 2)
        {
            // cout << str[i];
            str1.push_back(str[i]);
        }

        // for (char i = 0; i < n; i++)
        // {
        //     cout << str1[i];
        // }

        cout << str1 << endl;
    }
    return 0;
}