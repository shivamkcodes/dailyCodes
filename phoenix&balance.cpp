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
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {

        int n;
        cin >> n;
        vector<int> arr;
        int c1 = 0;
        int c2 = 0;
        for (int i = 1; i <= n; i++)
        {
            arr.push_back(pow(2, i));
        }
        // for (int x : arr)
        //     cout << x;
        // cout << endl;
        for (int i = n / 2 - 1; i < n - 1; i++)
        {
            c1 += arr[i];
        }
        for (int i = 0; i < n / 2 - 1; i++)
        {
            c2 += arr[i];
        }
        c2 += arr[n - 1];

        // cout << arr[0];
        // cout << c2 << " " << c1;
        cout << abs(c2 - c1) << endl;
    }
    return 0;
}