#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <map>
#include <set>
#define in long long
#include <cstring>
using namespace std;
//incomplete yet i need to learn more thoroughly about the stl again.......this time a bit more seriously
int main()
{

    multiset<int> brr;
    vector<int> arr;
    map<int, int> m;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int k;
        cin >> k;
        // brr.insert(k);
        arr.push_back(k);
    }
    sort(arr.begin(), arr.end());

    for (int i = 1; i < n - 1; i++)
    {
        arr.push_back(arr[i]);
        // brr.insert(arr[i]);
    }
    sort(arr.begin(), arr.end());

    for (int i = n; i >= 1; i--)
    {
        int d;
        d = arr[i] - arr[i - 1];
        brr.insert(d);
        pair<int, pair<int, int>> p;
        p.first = d;
        p.second.first = arr[i];
        p.second.second = arr[i - 1];
        // m.insert(p);
    }
    for (int x : arr)
        cout << x << " ";
    cout << endl;
    brr.erase(0);
    for (int x : brr)
        cout << x << " ";
    cout << *brr.begin();

    for (auto x : p)
        return 0;
}