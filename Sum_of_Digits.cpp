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
            int rem = n % 10;
            c += rem;
            n = n / 10;
        }
        cout << c << endl;
    }

    auto end = chrono::steady_clock::now();
    //cout << chrono::duration_cast<chrono::milliseconds>(end - start).count()<<endl;
    return 0;
}