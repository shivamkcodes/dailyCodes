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

    in t, n, k;
    cin >> t;
    //we need to find the string...with 2 'b' and rest of them n-2 are 'a'
    //acc to pattern of length 5 first is aaabb and last will be bbaaa
    while (t--)
    {
        cin >> n >> k;
        string str(n, 'a'); //aaaaaaaa
        for (in i = n - 2; i >= 0; i--)
        {
            in c = n - 1 - i; //counts how many times b stays at a
            if (k <= c)
            {
                str[i] = 'b';
                str[n - k] = 'b';
                cout << str << endl;
                break;
            }
            else
            {
                k -= c;
            }
        }
    }

    auto end = chrono::steady_clock::now();
    //cout << chrono::duration_cast<chrono::milliseconds>(end - start).count()<<endl;
    return 0;
}
