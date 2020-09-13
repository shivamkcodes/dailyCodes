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

bool Isprime(int n)
{
    int i;
    bool ret;
    for (i = 2; (i * i) <= n; i++)
    {
        if (n % i == 0)
        {
            // return 0;
            ret = false;
            break;
        }
    }
    if ((i * i) > n)
    {
        // return 1;
        ret = true;
    }
    return ret;
}
int main()
{
    auto start = chrono::steady_clock::now();

    int n, m;
    cin >> n >> m;
    bool val;
    int i = n + 1;
    for (; i <= m; i++)
    {
        val = Isprime(i);

        if (val)
        {
            break;
        }
    }
    // cout << val;
    if (val && i == m)
    {
        /* code */
        cout << "YES";
    }

    else if (i != m)
    {
        /* code */
        cout << "NO";
    }

    auto end = chrono::steady_clock::now();
    //cout << chrono::duration_cast<chrono::milliseconds>(end - start).count()<<endl;
    return 0;
}