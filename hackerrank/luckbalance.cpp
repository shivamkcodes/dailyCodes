#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <map>
#include <set>
#define in long long
#include <cstring>
using namespace std;
//try using without map...............
int main()
{

    int n, k;
    cin >> n >> k;
    multimap<int, int> arr;
    for (int i = 0; i < n; i++)
    {
        int s, t;
        cin >> s >> t;
        arr.insert(make_pair(s, t));
    }
    int counter = 0;
    for (auto i = arr.begin(); i != arr.end(); i++)
    {
        if (i->second == 1)
        {
            // cout << i->first << " " << i->second << endl;
            counter++;
        }
    }
    int val = abs(counter - k);
    // auto itr = arr.begin();
    // advance(itr, val);
    // for (auto i = arr.begin(); i != itr; i++)
    // {
    //     arr.erase(arr.begin());
    // }
    int sam = 0;
    // vector<int> brr;
    for (int i = 0; i < val; i++)
    {
        // brr.push_back(*arr.begin());
        // cout << arr.begin()->first;
        sam += arr.begin()->first;
        // cout<<(*arr.begin());
        arr.erase(arr.begin());
    }
    int sum = 0;
    for (auto i = arr.begin(); i != arr.end(); i++)
    {
        sum += i->first;
    }
    cout << sum - sam;

    return 0;
}