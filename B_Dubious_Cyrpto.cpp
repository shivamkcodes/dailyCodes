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

        in l, r, m;
        cin >> l >> r >> m;
        in a, b, c;
        in n;
        in rem;
        a = l;
        if (m / l < 1)
        {
            n = ceil(m / l);
        }
        else
        {
            n = floor(m / l);
        }
        rem = m - (n * l);
        vector<in> v;

        for (in i = l; i <= r; i++)
        {
            if (count(v.begin(), v.end(), rem - i))
            {
                v.push_back(i);
            }
            else
            {
                b = i;
                c = abs(rem - i);
            }
        }

        cout << a << " " << b << " " << c << " " << endl;
    }

    auto end = chrono::steady_clock::now();
    //cout << chrono::duration_cast<chrono::milliseconds>(end - start).count()<<endl;
    return 0;
}