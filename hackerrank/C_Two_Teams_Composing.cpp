#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <map>
#include <set>
#include <chrono>
#define in long long
#include <cstring>
using namespace std;

int main()
{
    auto start = chrono::steady_clock::now();
    in t;
    cin >> t;
    while (t--)
    {
        vector<int> a;
        in n;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            in k;
            cin >> k;
            a.push_back(k);
        }

        // int a[] = {4, 2, 4, 1, 4, 3, 4};
        multiset<int, greater<int>> s;
        // int a[] = {2, 1, 5, 4, 3};
        map<int, int> arr;
        for (auto x : a)
        {
            arr[x]++;
        }
        for (auto i = arr.begin(); i != arr.end(); i++)
        {
            // cout << i->first << " " << i->second << endl;
            s.insert(i->second);
        }
        // for (int x : s)
        //     cout << x;

        in similar = *(s.begin());
        in diff = n - similar;
        // cout << similar << " " << diff << endl;
        // cout << min(2, 3);

        // if (n > 1 && cal == 1)
        // {
        //     cout << cal << endl;
        // }
        // else if (n / 2 == (cal - 1))
        // {

        //     cout << cal - 1 << endl;
        // }
        // cout << n - cal << endl;

        in val1 = min(diff, similar - 1);
        in val2 = min(diff - 1, similar);
        // cout << max(val1, val2) << endl;
        cout << val1 << " " << val2 << endl;
        auto end = chrono::steady_clock::now();
    }
    //cout << chrono::duration_cast<chrono::milliseconds>(end - start).count()<<endl;
    return 0;
}