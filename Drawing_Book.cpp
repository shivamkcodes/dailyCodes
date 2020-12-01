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

bool isprime(int n)
{
    int flag = 0;
    if (n == 2 || n == 3)
        return true;
    if (n % 2 == 0 || n % 3 == 0)
        return false;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}
int main()
{

    int n, p;
    cin >> n >> p;
    int ans = 0;

    // vector<pair<int, int>> arr;
    if (p & 1)
    {

        if (p == n || p == n - 1 || p == 1)
        {
            ans = 0;
            cout << 0;
        }
        else
        {
            int path = min(n - p, p);
            cout << floor(path / 2);
        }
    }
    else
    {
        if (p == n || p == 1)
        {
            ans = 0;
            cout << 0;
        }
        else
        {
            int path = min(n - p, p);
            cout << floor(path / 2);
        }
    }

    return 0;
}