#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <map>
#include <set>
// #include <chrono>
#define in long long
#include <cstring>
using namespace std;

int main()
{
    // auto start = chrono::steady_clock::now();

    in t;
    cin >> t;
    for (in i = 0; i < t; i++)
    {

        in x, y, n;
        cin >> x >> y >> n;
        // vector<in> arr;

        for (in i = n; i >= y; i--)
        {
            if (i % x == y)
            {
                // arr.push_back(i);
                cout << i << endl;
                break;
            }
        }

        // for (int x : arr)
        //     cout << x << " ";
        // cout << arr[0] << endl;
        // auto end = chrono::steady_clock::now();
        // cout << endl
        //      << chrono::duration_cast<chrono::milliseconds>(end - start).count() << "ms" << endl;
    }
    return 0;
}