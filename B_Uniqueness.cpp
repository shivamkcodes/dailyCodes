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
    vector<int> arr(n);
    for (int &it : arr)
        cin >> it;

    unordered_map<int, int> mp;
    for (int x : arr)
        mp[x]++;

    int c = 0;
    for (auto x : mp)
    {

        if (x.second > 1)
        {
            c++;
        }
    }

    // for (auto x : mp)
    // {
    //     cout << x.first << " " << x.second;
    //     cout << endl;
    // }

    cout << c << endl;

    return 0;
}