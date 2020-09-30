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

int fun(int x, int y)
{
    if (x <= y)
    {
        return 1;
    }
    else
    {
        int ret = x % y;
        if (ret == 0)
        {
            return (x / y);
        }
        else
        {
            return (x / y) + 1;
        }
    }
}

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c, d, k;
        cin >> a >> b >> c >> d >> k;

        int first = fun(a, c);
        int sec = fun(b, d);
        if (first + sec > k)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << first << " " << sec << endl;
        }
    }

    return 0;
}