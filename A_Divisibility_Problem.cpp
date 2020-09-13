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
//pure maths.......
in Cal(in a, in b)
{
    in res = 0;
    if (a % b == 0)
    {
        return res;
    }
    else
    {
        in v = (a % b);
        res = b - v;
    }
    return res;
}

int main()
{
    auto start = chrono::steady_clock::now();
    in t;
    cin >> t;
    while (t--)
    {

        in a, b;
        in c = 0;
        cin >> a >> b;
        // while (a % b != 0)
        // {
        //     a++;
        //     c++;
        // }
        cout << Cal(a, b) << endl;
    }

    auto end = chrono::steady_clock::now();
    //cout << chrono::duration_cast<chrono::milliseconds>(end - start).count()<<endl;
    return 0;
}