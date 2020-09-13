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

    in t, n;
    cin >> t >> n;
    in c = 0;
    while (t--)
    {
        in k;
        cin >> k;

        if (k % n == 0)
        {
            c++;
        }
    }
    cout << c;

    auto end = chrono::steady_clock::now();
    //cout << chrono::duration_cast<chrono::milliseconds>(end - start).count()<<endl;
    return 0;
}