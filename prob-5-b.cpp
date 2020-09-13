#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <map>
#include <set>
#include <unordered_set>
#include <stack>
#include <queue>
#include <chrono>
#define in long long
#include <string>
using namespace std;

void solve(vector<int> nums)
{
    int n = nums.size();
    sort(nums.begin(), nums.end());
    vector<int> brr;
    vector<int> crr;
    set<pair<int, pair<int, int>>> s;
    for (int i = 0; i < n - 2; i++)
    {
        int p1 = i + 1;
        int p2 = n - 1;
        while (p1 < p2)
        {

            if ((nums[p1] + nums[p2] + nums[i] == 0) && (s.find({nums[p1], {nums[p2], nums[i]}}) == s.end()))
            {
                s.insert({nums[p1], {nums[p2], nums[i]}});
                brr.push_back(nums[p1]);
                brr.push_back(nums[p2]);
                brr.push_back(nums[i]);
                p1++;
                printf("Triplet is %d, %d, %d", nums[i],
                       nums[p1], nums[p2]);
            }
            else if (nums[p1] + nums[p2] + nums[i] > 0)
            {
                /* code */
                p1++;
            }
            else if (nums[p1] + nums[p2] + nums[i] < 0)
            {
                /* code */
                p2--;
            }
            // todo  crr.push_back(brr);
            // brr.clear()
        }
    }
}

void find3Numbers(int nums[], int n, int sum)
{
    int l, r;
    unordered_set<pair<int, pair<int, int>>> s;

    // sort(nums, nums + n);

    for (int i = 0; i < n - 2; i++)
    {

        l = i + 1;

        r = n - 1; // index of the last element
        while (l < r)
        {
            if (nums[l] + nums[r] + nums[i] == 0)
            {
                if (s.find({nums[l], {nums[r], nums[i]}}) == s.end())
                {
                    /* code */

                    s.insert({nums[l], {nums[r], nums[i]}});
                    printf("Triplet is %d, %d, %d", nums[i],
                           nums[l], nums[r]);
                    // break;
                    // return true;
                    l++;
                    // i++;
                }
            }
            else if (nums[i] + nums[l] + nums[r] < sum)
            {

                l++;
            }
            else if (nums[i] + nums[l] + nums[r] > sum)
            {

                r--;
            }
        }
    }

    // for (auto x : s)
    // {
    //     cout << x.first << " " << x.second.first << " " << x.second.second << endl;
    // }

    // If we reach here, then no triplet was found
    // return false;
}

/* Driver program to test above function */
int main()
{
    // int nums[] = {-2, 0, 1, 1, 2};
    int nums[] = {-1, 0, 1, 2, -1, 4};
    // vector<int> nums = {-1, 0, 1, 2, -1, 4};
    // -1 -1 0 1 2 4
    int sum = 0;
    int n = sizeof(nums) / sizeof(nums[0]);

    find3Numbers(nums, n, sum);
    // solve(nums);

    return 0;
}
