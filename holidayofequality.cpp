#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <map>
#include <set>
#include <queue>

// #include <multiset>
#define in long long
#include <cstring>
using namespace std;

int main()
{
    // multiset<int> arr;
    vector<int> arr;
    int n;
    cin >> n;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        int k;
        cin >> k;
        arr.push_back(k);
    }
    sort(arr.begin(), arr.end());
    int max = *arr.rbegin();
    // cout << *arr.rbegin() << endl;
    arr.pop_back();
    for (int x : arr)
    {
        // cout << x;
        sum += x;
    }
    // cout << sum << " ";
    cout << ((n - 1) * max) - sum;
    return 0;
}