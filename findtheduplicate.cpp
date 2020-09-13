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

    int n;
    cin >> n;
    vector<int> arr;
    set<int> s;
    for (int i = 0; i < n; i++)
    {
        // cin >> arr[i];
        int k;
        cin >> k;
        if (s.find(k) == s.end())
        {
            // arr.push_back(k);
            s.insert(k);
        }
        else
        {
            cout << k;
            // break;
        }
    }

    // for (int x : arr)
    //     cout << x;

    auto end = chrono::steady_clock::now();
    //cout << chrono::duration_cast<chrono::milliseconds>(end - start).count()<<endl;
    return 0;
}