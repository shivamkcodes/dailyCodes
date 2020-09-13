#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <map>
#include <set>
#define in long long
#include <cstring>
using namespace std;

// int c = 0;
// int fafa(int n)
// {
//     if (n == 1)
//     {
//         return c;
//         c++;
//     }
//     else
//     {
//         c++;
//         return fafa(n / 2);
//     }
//     // cout << c;
// }
int main()
{

    int n;
    cin >> n;
    int c = 0;
    for (int i = 2; i < n - 1; i++)
    {
        if ((n - i) % i == 0)
        {
            c++;
        }
    }
    cout << c + 1;
    return 0;
}