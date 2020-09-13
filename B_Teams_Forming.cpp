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
    in ans = 0;
    sort(arr.begin(), arr.end());

    for (int i = 0; i < n - 1; i = i + 2)
    {

                ans += abs(arr[i] - arr[i + 1]);
    }

    cout << ans << endl;

    return 0;
}