#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <unordered_map>
#include <map>
#include <set>
#define in long long
#include <cstring>
using namespace std;

int main()
{
    int n;
    cin >> n;
    multimap<int, string> arr;
    for (int i = 0; i < n / 2; i++)
    {
        int s;
        cin >> s;
        string k;
        cin >> k;
        arr.insert(make_pair(s, "-"));
        // arr.insert(i,k);
    }
    for (int i = 0; i < n / 2; i++)
    {
        int s;
        cin >> s;
        string k;
        cin >> k;
        arr.insert(make_pair(s, k));
        // arr.insert(i,k);
    }
    // for (auto x : arr)
    //     cout << x;
    // for (int i = 1; i <= n; i++)
    // {
    //     cout<<i<<" " << arr[i] << endl;
    // }
    for (auto i = arr.begin(); i != arr.end(); i++)
    {
        cout << i->second << " ";
    }

    return 0;
}