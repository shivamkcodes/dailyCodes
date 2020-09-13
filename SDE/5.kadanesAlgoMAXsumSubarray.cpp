#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <map>
#include <unordered_map>
#include <set>
#include <stack>
#include <queue>
// #define in long long
#include <climits>
#include <string>
using namespace std;

int main()
{

    int n;
    cin >> n;
    vector<int> arr(n);
    for (int &it : arr)
        cin >> it;

    int sum = 0;
    int maxElement = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
        maxElement = max(sum, maxElement);
        if (sum < 0)
        {
            sum = 0;
        }
    }

    cout << maxElement;

    return 0;
}
/*
8
-2 -3 4 -1 -2 1 5 -3

*/