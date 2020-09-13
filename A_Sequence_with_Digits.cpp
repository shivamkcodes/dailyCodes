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

int main()
{
    auto start = chrono::steady_clock::now();
    in t;
    cin >> t;
    while (t--)
    {
        in a, k;
        cin >> a >> k;
        for (in i = 1; i < k; i++)
        {
            in max1 = 0;
            in min1 = 1e18;

            in ret = a;
            while (a > 0)
            {
                in rem = a % 10;
                max1 = max(max1, rem);
                min1 = min(min1, rem);
                a = a / 10;
            }
            a = ret + max1 * min1;
            if (min1 == 0)
            {
                break;
            }
        }
        cout << a << endl;
    }

    auto end = chrono::steady_clock::now();
    //cout << chrono::duration_cast<chrono::milliseconds>(end - start).count()<<endl;
    return 0;
}