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

    int n, m;
    cin >> n >> m;
    vector<int> arr(n);
    vector<int> brr(m);

    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> minh; //implementation of min-heap...

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> brr[i];
    }

    sort(arr.begin(), arr.end());
    sort(brr.begin(), brr.end());

    int p1 = 0;
    int p2 = 0;

    in result = INT64_MAX;

    while (p1 < n && p2 < m)
    {
        if (abs(arr[p1] - brr[p2] < result))
        {
            result = abs(arr[p1] - brr[p2]);
            minh.push({arr[p1], brr[p2]});
        }

        if (arr[p1] < brr[p2])
        {
            p1++;
        }

        else
        {
            p2++;
        }
    }
    cout << result << endl;
    cout << minh.top().first << "  " << minh.top().second;

    return 0;
}