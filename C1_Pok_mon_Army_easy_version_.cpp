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
    in t;
    cin >> t;
    while (t--)
    {

        in n, q;
        cin >> n >> q;
        vector<in> arr(n);
        for (in &it : arr)
            cin >> it;

        int sum = 0;
        int maxi = arr[0];
        for (in x : arr)
        {
            sum += x;
            maxi = max(sum, maxi);

            if (sum < 0)
            {
                sum = 0;
                        }
        }
    }
    return 0;
}