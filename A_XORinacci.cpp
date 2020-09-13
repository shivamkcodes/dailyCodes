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

in fun(in a, in b, in c)
{
    if (c == 0)
    {
        return a;
    }
    else if (c == 1)
    {
        return b;
    }
    else
    {
        return fun(a, b, c - 1) ^ fun(a, b, c - 2);
    }
}

int main()
{

    in n;
    cin >> n;
    // vector<int> arr(n);
    // for (int &it : arr)
    // cin >> it;
    while (n--)
    {
        in a, b, c;
        cin >> a >> b >> c;
        // cout << fun(a, b, c) << endl;
        in val = a ^ b;
        vector<in> arr = {a, b, val};

        cout << arr[c % 3] << endl;
    }

    return 0;
}