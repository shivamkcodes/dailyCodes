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

int main()
{

    in n;
    cin >> n;
    priority_queue<in> maxh;
    vector<in> arr(n);
    for (in &it : arr)
        cin >> it;

    in sum = 0;
    for (in x : arr)
    {
        sum += x;
        maxh.push(x);
    }

    in maxi = maxh.top();

    if (sum & 1)
    {
        cout << "NO";
    }
    else
    {
        in rsum = sum - maxi;
        if (maxi <= rsum)
        {
            cout << "YES";
        }
        else
        {
            cout << "NO";
        }
    }

    return 0;
}