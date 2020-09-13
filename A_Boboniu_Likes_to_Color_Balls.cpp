#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <map>
#include <set>
#include <stack>
#include <queue>
#include <chrono>
#define in long long
#include <string>
using namespace std;

bool solve(in a, in b, in c, in d)
{
    in count = 0;
    if (a % 2 == 0)
    {
        count++;
    }
    if (b % 2 == 0)
    {
        count++;
    }
    if (c % 2 == 0)
    {
        count++;
    }
    if (d % 2 == 0)
    {
        count++;
    }
    if (count >= 3)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    auto start = chrono::steady_clock::now();

    in t;
    cin >> t;
    while (t--)
    {
        in a, b, c, d;
        cin >> a >> b >> c >> d;
        if (solve(a, b, c, d))
            cout << "YES" << endl;

        else
            cout << "NO" << endl;
    }

    auto end = chrono::steady_clock::now();
    //cout << chrono::duration_cast<chrono::milliseconds>(end - start).count()<<endl;
    return 0;
}