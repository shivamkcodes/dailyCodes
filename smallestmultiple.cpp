#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <map>
#include <set>
#define in long long
#include <cstring>
using namespace std;

int main()
{
    int n = 11;
    // while (1)
    // {
    //     // if (n % 2 == 0 && n % 3 == 0)
    //     // {

    //     //     cout << n << endl;
    //     //     exit(0);
    //     // }
    //     int c = 0;
    //     for (int i = 1; i <= 20; i++)
    //     {
    //         if (n % i == 0)
    //         {
    //             c++;
    //         }
    //         if (c == 20)
    //         {
    //             cout << n << endl;
    //             exit(0);
    //         }
    //     }

    //     cout << n << endl;
    //     n++;
    // }
    int i = 20;

    while (i % 2 != 0 || i % 3 != 0 || i % 4 != 0 || i % 5 != 0 ||
           i % 6 != 0 || i % 7 != 0 || i % 8 != 0 || i % 9 != 0 ||
           i % 10 != 0 || i % 11 != 0 || i % 12 != 0 || i % 13 != 0 ||
           i % 14 != 0 || i % 15 != 0 || i % 16 != 0 || i % 17 != 0 ||
           i % 18 != 0 || i % 19 != 0 || i % 20 != 0)
    {
        i += 20;
    }
    cout << i;
    return 0;
}