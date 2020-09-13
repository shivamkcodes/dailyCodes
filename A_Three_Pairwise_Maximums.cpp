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
        in a, b, c;
        in x, y, z;
        cin >> x >> y >> z;
        in a1, b1, c1;
        in a2, b2, c2;
        a1 = b1 = x;
        a2 = c1 = y;
        b2 = c2 = z;
        a = min(a1, a2);
        b = min(b1, b2);
        c = min(c1, c2);
        if (x == max(a, b) && y == max(a, c) && z == max(b, c))
        {
            cout << "YES" << endl;
            cout << a << " " << b << " " << c << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    auto end = chrono::steady_clock::now();
    //cout << chrono::duration_cast<chrono::milliseconds>(end - start).count()<<endl;
    return 0;
}