#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <map>
#include <set>
#define in long long
#include <cstring>
using namespace std;
//porrest performance.........
int main()
{

    vector<long> arr = {0};
    // arr[0] = 1;
    vector<long> brr;
    // multiset<long>se;
    multimap<long, long> se;
    long n;
    cin >> n;
    if (n == 1)
    {
        cout << 1;
        exit(0);
    }

    for (long i = 1; i < 100; i++)
    {
        arr.push_back(arr[i - 1] + i);
        // cout << arr[i];
    }
    long s = 0;
    for (long j = 0; j < 100; j++)
    {
        s += arr[j];
        brr.push_back(s);
    }

    for (long i = 1; i < 100; i++)
    {
        if (n == brr[i])
        {
            cout << i;
            exit(0);
        }
        else
        {
            // se.insert(brr[i]-n);
            if (n - brr[i] > 0)
            {
                se.insert(make_pair(i, n - brr[i]));
                /* code */
            }
        }
    }

    // for (long x : brr)
    //     cout << x << " ";
    cout << se.end()->first;
    // for (auto i = se.begin(); i != se.end(); i++)
    // {
    //     cout << i->first << "  " << i->second << endl;
    // }

    return 0;
}