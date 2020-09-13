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

int main()
{
    auto start = chrono::steady_clock::now();
    in k, l, m, n, d;
    cin >> k >> l >> m >> n >> d;
    in c = 0;
    if (k == 1 || l == 1 || m == 1 || n == 1)
    {
        /* code */
        cout << d;
        exit(0);
    }

        for (int i = 1; i <= d; i++)
    {
        if (i % k == 0)
        {
            /* code */
            c++;
        }
        else if (i % l == 0)
        {
            /* code */
            c++;
        }
        else if (i % m == 0)
        {
            /* code */
            c++;
        }
        else if (i % n == 0)
        {
            /* code */
            c++;
        }
    }
    cout << c;

    auto end = chrono::steady_clock::now();
    //cout << chrono::duration_cast<chrono::milliseconds>(end - start).count()<<endl;
    return 0;
}