#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <map>
#include <set>
#include <stack>
#include <queue>
#include <chrono>
#define in long long
#include <string>
using namespace std;

int main()
{

    int n;
    cin >> n;
    vector<int> nums(n);
    vector<int> brr;
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    sort(nums.begin(), nums.end());

    for (int i = 0; i < n; i++)
    {
        int beg = i + 1;
        int end = n - 1;
        while (beg < end)
        {
            if (nums[beg] + nums[end] + nums[i] == 0)
            {
                /* code */
                cout << nums[beg] << " " << nums[end] << " " << nums[i] << " " << endl;
                // brr.push_back(nums[beg]);
                // brr.push_back(nums[end]);
                // brr.push_back(nums[i]);
                // cout << beg << " " << end << " " << i << " " << endl;
                break;
            }
            else if (nums[beg] + nums[end] + nums[i] < 0)
            {
                /* code */
                beg++;
            }
            else
            {
                /* code */
                end--;
            }
        }
    }

    return 0;
}
// -1 0 1 2 -1 -4