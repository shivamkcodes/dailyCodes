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
        in x, y, a, b;
        cin >> x >> y >> a >> b;
        // in i = x;
        // in j = y;
        // in c = 0;
        // in check = 0;

        // while (i != j && j >= i)
        // {
        //     i += a;
        //     j -= b;
        //     c++;
        //     if (i > j)
        //     {
        //         cout << "-1" << endl;
        //         check++;
        //         break;
        //         // exit(0);
        //     }
        // }
        // if (check == 0)
        // {
        //     /* code */
        //     cout << c << endl;
        // }
        if ((y - x) % (a + b) == 0)
        {
            cout << (y - x) / (a + b) << endl;
        }
        else
        {
            cout << "-1" << endl;
        }
    }

    auto end = chrono::steady_clock::now();
    //cout << chrono::duration_cast<chrono::milliseconds>(end - start).count()<<endl;
    return 0;
}