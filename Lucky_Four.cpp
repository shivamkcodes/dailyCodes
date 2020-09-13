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

        in n;
        cin >> n;
        in c = 0;
        while (n != 0)
        {
            in rem = n % 10;
            n = n / 10;
            if (rem == 4)
            {
                c++;
            }
        }
        cout << c << endl;

        //solution2
        // in len = log10(n);
        // in len1 = len + 1;
        // // cout << len;
        // in c = 1;
        // in count = 0;
        // while (len1--)
        // {
        //     in val = n / c;
        //     in val1 = val % 10;
        //     c *= 10;
        //     // cout << val1 << endl;
        //     if (val1 == 4)
        //     {
        //         count++;
        //     }
        // }

        // cout << count << endl;
    }

    auto end = chrono::steady_clock::now();
    //cout << chrono::duration_cast<chrono::milliseconds>(end - start).count()<<endl;
    return 0;
}