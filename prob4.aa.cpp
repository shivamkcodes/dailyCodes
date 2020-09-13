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
    auto start = chrono::steady_clock::now();
    in n, target;
    cin >> n >> target;

    vector<int> nums(n);
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    vector<int> brr;
    for (int i = 0; i < n; i++)
    {
        int j = i + 1;
        in val = target - nums[i];
        auto itr = std::find(nums.begin() + j, nums.end(), val);
        if (itr != nums.end())
        {
            cout << i << " " << itr - nums.begin();
            // exit(0);
        }
    }

    auto end = chrono::steady_clock::now();
    //cout << chrono::duration_cast<chrono::milliseconds>(end - start).count()<<endl;
    return 0;
}