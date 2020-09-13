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

    in n;
    cin >> n;

    in t = 0;
    for (in i = 0; i < n; i++)
    {
        in k;
        cin >> k;
        t += k;
    }
    if (t == 1)
    {
        /* code */
        cout << "3";
    }
    else
    {

        cout << t / (n + 1) + 1;
    }

    // if (t & 1)
    // {
    //     cout << 1;
    // }
    // else
    // {
    //     cout << 2;
    // }

    auto end = chrono::steady_clock::now();
    //cout << chrono::duration_cast<chrono::milliseconds>(end - start).count()<<endl;
    return 0;
}