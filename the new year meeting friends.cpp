#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> arr;
    for (int i = 0; i < 3; i++)
    {
        int k;
        cin >> k;
        arr.push_back(k);
    }
    sort(arr.begin(), arr.end());
    auto first = arr.begin();
    auto last = arr.rbegin();
    // cout << *first << " " << *last;
    int mid = (*first + *last) / 2;
    // cout << mid << " ";
    cout << mid - (*first) + (*last - mid) << " ";
    // cout << << " ";

    return 0;
}