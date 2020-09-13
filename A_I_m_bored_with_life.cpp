#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <map>
#include <set>
#include <chrono>
#define in long long
#include <cstring>
using namespace std;

int fact(int n)
{
    if (n <= 1)
    {
        return 1;
    }
    return n * fact(n - 1);
}

int main()
{
    auto start = chrono::steady_clock::now();

    in a, b, x, y = 1;
    cin >> a >> b;
    // cout << fact(a) << " " << fact(b);
    // cout << __gcd(fact(a), fact(b));
    x = min(a, b);

    // for (int i = 1; i <= x; i++)
    // {
    //     y = y * i;
    // }
    cout << fact(x);

    auto end = chrono::steady_clock::now();
    //cout << chrono::duration_cast<chrono::milliseconds>(end - start).count()<<endl;
    return 0;
}