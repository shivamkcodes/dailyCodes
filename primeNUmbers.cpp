#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <map>
#include <set>
#define in long long
#include <cstring>
using namespace std;

// int fun(in n)
// {
//     int i;
//     for (i = 3; (i * i) <= n; i = i + 2)
//     {
//         // cout << i << " " << endl;
//         if (n % (i) == 0)
//         {
//             // cout << "not prime";
//             break;
//         }
//     }
//     return i;
// }
int main()
{

    int i, j;
    // in n = 600851475143;
    // in n = 8462696833;
    // in n = 291817132;
    in n;
    cin >> n;
    for (i = 3; (i * i) <= n; i = i + 2)
    {
        // cout << i << " " << endl;
        if (n % (i) == 0)
        {
            cout << "not prime";
            break;
        }
    }
    // for (int i = 0; i < ; i++)
    // {
    //     /* code */
    // }

    // in k = fun(n);
    // in k1 = fun(k);
    // in k2 = fun(k1);
    // in k3 = fun(k2);
    // cout << fun(k);

    // // n = i;
    if ((i * i) > n)
    {
        cout << n << "is a prime  no..";
    }

    return 0;
}