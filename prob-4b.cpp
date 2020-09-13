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

pair<int, int> twosum(vector<int> arr, int target)
{

    int p1 = 0;
    int p2 = arr.size() - 1;

    while (p1 < p2)
    {
        if (arr[p1] + arr[p2] == target)
        {
            /* code */
            // cout << arr[p1] << " " << arr[p2] << " " << endl;
            // break;
            // continue;
            // p1++;
            // return 1;
            pair<int, int> p = {arr[p1], arr[p2]};
            return p;
        }
        else if (arr[p1] + arr[p2] < target)
        {
            /* code */
            p1++;
        }
        else if (arr[p1] + arr[p2] > target)
        {
            /* code */
            p2--;
        }
    }
    // return 0;
}

int main()
{

    int n, target;
    cin >> n >> target;

    vector<int> arr(n);
    for (int &x : arr)
        cin >> x;

    sort(arr.begin(), arr.end());

    for (int i = 0; i < n - 2; i++)
    {
        if (twosum(arr, -arr[i]))
        {
        }
    }

    // for (int x : arr)
    //     cout << x << " ";

    return 0;
}
// 7 5
// 8 4 -1 3 -4 0 3
// -1 0 2 3 3 4 6