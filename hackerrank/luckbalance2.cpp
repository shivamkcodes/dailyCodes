#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <map>
#include <set>
#define in long long
#include <cstring>
using namespace std;
//works very finely  clears all the test cases.............
int main()
{

    int n, k;
    cin >> n >> k;
    multiset<int> arr;
    int res = 0;
    for (int i = 0; i < n; i++)
    {
        int s;
        bool t;
        cin >> s >> t;
        if (t)
            arr.insert(s);
        else
            res += s;
    }
    // for (int x : arr)
    //     cout << x << " ";
    // cout << "result is" << res;

    int diff = (arr.size() - k);
    int sam = 0;
    for (int i = 0; i < diff; i++)
    {
        sam += *arr.begin();
        arr.erase(arr.begin());
    }
    for (auto i = arr.begin(); i != arr.end(); i++)
    {
        res += *i;
    }
    // cout << sam;
    // cout << diff;
    cout << res - sam;

    return 0;
}