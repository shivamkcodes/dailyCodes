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

    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> arr(n);
        for (int &it : arr)
            cin >> it;

        // sort(arr.begin(),arr.end());
        int ans = 0;
        int min = arr[0];

        // arr.erase(min);

        for (int i = 0; i < n; i++)
        {
            if (arr[i] < min)
            {
                min = arr[i];
            }
        }

        auto itr = find(arr.begin(), arr.end(), min);

      
        int index = itr - arr.begin();
        arr.erase(arr.begin() + index);

        for (int i = 0; i < arr.size(); i++)
        {
            int val = ((k - arr[i]) / min);
            ans += val;
        }

        cout << ans << endl;
    }

    return 0;
}