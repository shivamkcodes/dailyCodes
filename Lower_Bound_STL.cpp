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
    for (int i = 0; i < n; i++)
    {
        int k;
        cin >> k;
        arr.push_back(k);
    }
    int m;
    cin >> m;
    for (int i = 0; i < m; i++)
    {
        int q;
        cin >> q;
        auto val = lower_bound(arr.begin(), arr.end(), q);
        // auto itr = std::find(arr.begin(), arr.end(), q);
        // if (itr != arr.end())
        // {
        //     cout << "Yes"
        //          << " ";
        // }
        // else
        // {
        //     cout << "No"
        //          << " ";
        // }
        // int c = count(arr.begin(), arr.end(), q);
        if (arr[val - arr.begin()] == q)
        {
            cout << "Yes"
                 << " ";
        }
        else
        {
            cout << "No"
                 << " ";
        }

        cout << val - arr.begin() + 1 << endl;
    }

    auto end = chrono::steady_clock::now();
    //cout << chrono::duration_cast<chrono::milliseconds>(end - start).count()<<endl;
    return 0;
}