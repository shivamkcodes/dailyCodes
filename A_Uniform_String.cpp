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
    while (n--)
    {
        in a, b;
        cin >> a >> b;
        string str;
        in val = (a - b) / b;
        in val1 = a % b;

        for (char i = 97; i < 97 + b; i++)
        {
            str.push_back(i);
        }
        cout << str;
        while (val--)
        {
            cout << str;
            /* code */
        }
        for (int i = 0; i < val1; i++)
        {
            cout << str[i];
        }

        cout << endl;
    }

    return 0;
}