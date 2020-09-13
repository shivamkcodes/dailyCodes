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

    in n, k;
    cin >> n >> k;
    for (in i = 0; i < k; i++)
    {
        /* code */

        in ret = n % 10;
        if (ret == 0)
        {
            n = n / 10;
        }
        else
        {
            n--;
        }
        // cout << ret << endl;
    }
    cout << n << endl;
    auto end = chrono::steady_clock::now();
    //cout << chrono::duration_cast<chrono::milliseconds>(end - start).count()<<endl;
    return 0;
}