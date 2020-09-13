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

// priority_queue<in, vector<in>, greater<in>> minh;
int _id = 12;

int fun(vector<in> arr, in x, in y)
{
    int min = arr[x];
    for (in i = x; i <= y; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    return min;
}
int main()
{

    // cout << _id;
    in n, x, y;
    cin >> n >> x >> y;
    vector<in> arr(n);
    for (in &it : arr)
        cin >> it;

    in temp;
    for (in i = x; i < n; i++)
    {
        in m = fun(arr, i - x, i + y);
        temp = m;
        if (arr[i] == m)
        {
            break;
        }
    }
    auto it = find(arr.begin(), arr.end(), temp);
    if (it != arr.end())
    {

        cout << it - arr.begin() + 1 << endl;
    }
    else
    {
        cout << it - arr.begin();
    }
    // for (in i = 0; i < n; i++)
    // {
    //     if (arr[i] == temp && i == n - 1)
    //     {
    //         cout << i;
    //         break;
    //     }
    //     else if (arr[i] == temp)
    //     {
    //         cout << i + 1;
    //         break;
    //     }
    // }

    // cout << endl;
    return 0;
}