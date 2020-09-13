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

        in a, b, c, n;
        cin >> a >> b >> c >> n;
        // set<in, greater<int>> arr;
        vector<int> arr;
        arr.push_back(a);
        arr.push_back(b);
        arr.push_back(c);
        sort(arr.begin(), arr.end());
        in max = arr[2];
        in mid = arr[1];
        in min = arr[0];

        // cout << max << " " << min << " " << mid << endl;

        in diff = max - min;
        in diff1 = max - mid;

        // cout << diff << " " << diff1;
        in add = diff + diff1;
        in mainDiff = n - add;
        // cout << mainDiff << endl;
        if (mainDiff >= 0)
        {

            in s = 0;
            while (mainDiff != 0)
            {
                s += mainDiff % 10;
                mainDiff = mainDiff / 10;
            }
            // cout << s;
            if (s % 3 == 0)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}