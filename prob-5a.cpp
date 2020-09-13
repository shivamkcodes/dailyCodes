#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <map>
#include <unordered_set>
#include <set>
#include <stack>
#include <queue>
#include <chrono>
#define in long long
#include <string>
using namespace std;

void find3Numbers(int nums[], int arr_size, int sum)
{

    vector<int> brr;
    vector<vector<int>> crr;
    // Fix the first element as nums[i]
    for (int i = 0; i < arr_size - 2; i++)
    {

        // Find pair in subarray nums[i+1..n-1]
        // with sum equal to sum - nums[i]
        unordered_set<int> s;
        set<pair<int, pair<int, int>>> s;
        int curr_sum = sum - nums[i];
        for (int j = i + 1; j < arr_size; j++)
        {
            if (s.find(curr_sum - nums[j]) != s.end())
            {
                // printf("Triplet is %d, %d, %d", nums[i],
                //        nums[j], curr_sum - nums[j]);
                // return true;

                brr.push_back(nums[i]);
                brr.push_back(nums[j]);
                brr.push_back(curr_sum - nums[j]);
                // s.push_back(make_pair(nums[i], make_pair(nums[j], (curr_sum - nums[j]))));
                // s.insert({brr[0], {brr[1], brr[2]}});
            }
            s.insert(nums[j]);

            for (int x : brr)
            {

                cout << x << " ";
                // cout << endl;
            }
            cout << endl
                 << brr.size();

            brr.clear();
        }
    }

    // If we reach here, then no triplet was found
    // return false;
}

/* Driver program to test above function */
int main()
{
    // int nums[] = {-2, 0, 1, 1, 2};
    int nums[] = {-1, 0, 1, 2, -1, 4};
    int sum = 0;
    int arr_size = sizeof(nums) / sizeof(nums[0]);

    find3Numbers(nums, arr_size, sum);

    return 0;
}
