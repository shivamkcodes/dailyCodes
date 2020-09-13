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

    in k, n;
    cin >> n >> k;
    vector<int> arr;
    for (int i = 0; i < n; i++)
    {
        in m;
        cin >> m;
        arr.push_back(m);
    }
    sort(arr.begin(), arr.end());
    // for (int x : arr)
    //     cout << x;
    if (k == 0)
    {
        if (arr[0] == 1)
        {
            cout << "-1";
        }
        else
        {
            cout << "1";
        }
    }
    else
    {

        if (arr[k - 1] == arr[k])
        {
            cout << "-1";
        }
        else
        {
            cout << arr[k - 1];
        }
    }

    auto end = chrono::steady_clock::now();
    //cout << chrono::duration_cast<chrono::milliseconds>(end - start).count()<<endl;
    return 0;
}