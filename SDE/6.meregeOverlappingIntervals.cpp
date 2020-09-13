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

    int n;
    cin >> n;
    vector<pair<int, int>> arr;
    vector<pair<int, int>> brr;
    for (int i = 0; i < n; i++)
    {
        int k, l;
        cin >> k >> l;
        arr.push_back({k, l});
    }

    sort(arr.begin(), arr.end());
    /*
    bool merged = false;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n - 1; j++)
        {
            if (arr[j].second > arr[j + 1].first)
            {
                // brr.push_back({arr[j].first, max(arr[j].second, arr[j + 1].second)});
                arr[j].second = max(arr[j].second, arr[j + 1].second);
                // arr.erase(arr.begin() + j + 1);
                arr[j + 1].first = 0;
                arr[j + 1].second = 0;
                // break;
            }
        }
    }

    for (auto x : arr)
    {

        cout << x.first << "  " << x.second;
        cout << endl;
    }
*/

    pair<int, int> p = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (p.second > arr[i].first)
        {
            p.second = max(p.second, arr[i].second);
        }
        else if (p.second < arr[i].first)
        {
            // brr.push_back({p.first, max(p.second, arr[i].second)});
            brr.push_back(p);
            p = arr[i];
        }
    }
    brr.push_back(p);

    for (auto x : brr)
    {

        cout << x.first << "  " << x.second;
        cout << endl;
    }

    return 0;
}

/*

4
1 3
2 6
8 10
15 18



8
1 3
2 6
8 10 
8 9
9 11
15 18
2 4
16 17

*/