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

    int n;
    cin >> n;
    vector<int> arr(n);
    vector<pair<int, int>> brr;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            bool val = false;
            if (arr[j] > arr[i])
            {
                /* code */
                // cout << arr[j] << " ";
                brr.push_back({arr[i], j});
                val = true;
                break;
            }
            if (!val && j == n - 1)
            {
                // cout << "-1"
                //      << " ";
                brr.push_back({arr[i], -1});
            }
        }
        // cout << endl;
    }

    for (auto x : brr)
        cout << x.first << " " << x.second;
    cout << endl;

    auto end = chrono::steady_clock::now();
    //cout << chrono::duration_cast<chrono::milliseconds>(end - start).count()<<endl;
    return 0;
}