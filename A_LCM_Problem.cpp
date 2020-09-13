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

int gcd(int a, int b)
{
    return __gcd(a, b);
}

int lcm(int a, int b)
{
    return (a * b) / __gcd(a, b);
}

// void findpair(int l, int r)
// {
//     int c = 0;
//     int s = 0;
//     for (int i = l; i <= r; i++)
//     {
//         for (int j = i + 1; j <= r; j++)
//         {
//             if (j % i == 0 && j != i)
//             {
//                 cout << i << " " << j;
//                 s++;
//                 c = 1;
//                 break;
//             }
//         }

//         if (c == 1)
//             break;

//         if (s == 0)
//         {
//             cout << "-1"
//                  << " "
//                  << "-1";
//             break;
//         }
//     }
// }

void findpair(int l, int r)
{
    // ans1, ans2 store value of x
    // and y respectively
    int ans1 = l;
    int ans2 = 2 * l;

    cout << ans1 << " " << ans2 << endl;
}
int main()
{
    auto start = chrono::steady_clock::now();

    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;

        // cout << lcm(88, 89) << " ";
        // cout << lcm(13, 69) << endl;
        // cout << gcd(13, 69) << endl;
        if (b < 2 * a)
        {
            cout << "-1"
                 << " "
                 << "-1" << endl;
        }
        else
        {
            findpair(a, b);
            /* code */
        }

        // cout << endl;
    }

    auto end = chrono::steady_clock::now();
    //cout << chrono::duration_cast<chrono::milliseconds>(end - start).count()<<endl;
    return 0;
}