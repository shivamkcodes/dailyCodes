#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <map>
#include <set>
#define in long long
#include <cstring>
using namespace std;

int main()
{

    int n;
    int key;
    cin >> n >> key;
    vector<int> arr;
    vector<int> brr;
    int s = 0;
    for (int i = 0; i < n; i++)
    {
        int k;
        cin >> k;
        // s += k;
        arr.push_back(k);
    }
    // cout << s;

    for (int i = 0; i < n; i++)
    {
        // Pick ending point
        for (int j = i; j < n; j++)
        {
            // Print subarray between current starting
            // and ending points
            for (int k = i; k <= j; k++)
            {
                brr.push_back(arr[k]);
            }

            // cout << endl;
            brr.push_back(0);
        }
    }

    for (int x : brr)
        cout << x << " ";
    // for (int i = 0; i < brr.size(); i++)
    // {
    //     int s = 0;
    //     if (brr[i] != 0)
    //     {
    //         s += brr[i];

    //     }
    //     cout << s << " ";
    // }
    return 0;
}