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

    int n;
    cin >> n;
    vector<int> arr(n);
    for (int &it : arr)
        cin >> it;

    sort(arr.begin(), arr.end());

    // cout << *(arr.end() - 2) - arr.begin();
    // cout << arr[n - 1];
    int diff1 = arr[n - 2] - arr[0]; //remove max

    int diff2 = arr[n - 1] - arr[1]; //remove min

    cout << min(diff1, diff2);
    // cout << diff1 << "  " << diff2;
    return 0;
}