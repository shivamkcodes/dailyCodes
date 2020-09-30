#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <map>
#include <unordered_map>
#include <set>
#include <stack>
#include <queue>
#define in long long
#include <string>
using namespace std;
bool arraySortedOrNot(vector<in> arr)

{
    in c = 0;
    in n = arr.size();
    // Array has one or no element
    if (n == 0 || n == 1)
        return false;

    for (int i = 1; i < n; i++)

        // Unsorted pair found
        if (arr[i - 1] <= arr[i])
            return false;

    //     else if (arr[i - 1] == arr[i])
    //         c++;

    // if (c == n - 1)
    // {

    //     return false;
    // }
    // No unsorted pair found
    return true;
}

int main()
{

    in t;
    cin >> t;
    while (t--)
    {

        in n;
        cin >> n;
        vector<in> arr(n);
        for (in &it : arr)
            cin >> it;

        // in actual = n * (n - 1) / 2;
        // in req = (n * (n - 1) / 2) - 1;

        // reverse(arr.begin(), arr.end());
        // cout << arraySortedOrNot(arr) << endl;
        bool val = arraySortedOrNot(arr);
        if (!val)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO " << endl;
        }
    }
    return 0;
}