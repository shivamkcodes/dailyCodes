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

    int n;
    cin >> n;
    // vector<int> arr(n);
    // for (int &it : arr)
    // cin >> it;

    string str;
    // getline(cin, str);
    cin >> str;
    // cout << str;
    int cz = 0;
    int cn = 0;
    for (int i = 0; i < n; i++)
    {
        if (str[i] == 'z')
        {
            cz++;
        }
        if (str[i] == 'n')
        {
            cn++;
        }
    }

    while (cn--)
    {
        cout << 1 << " ";
    }
    while (cz--)
    {
        cout << 0 << " ";
    }

    return 0;
}