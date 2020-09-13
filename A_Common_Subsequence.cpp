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
        in n, m;
        cin >> n >> m;
        vector<int> arr1;
        vector<int> arr2;
        vector<int> arr3;
        for (int i = 0; i < n; i++)
        {
            in k;
            cin >> k;
            arr1.push_back(k);
        }
        for (int i = 0; i < m; i++)
        {
            in k;
            cin >> k;
            arr2.push_back(k);
        }
        sort(arr1.begin(), arr1.end());
        sort(arr2.begin(), arr2.end());
        // for (int x : arr1)
        //     cout << x;

        // cout << endl;
        // for (int x : arr2)
        //     cout << x;
        // cout << endl;

        // in s = max(m, n);
        in c = 0;
        for (in i = 0; i < arr1.size(); i++)
        {
            bool val = binary_search(arr2.begin(), arr2.end(), arr1[i]);

            if (val)
            {
                cout << "YES" << endl;
                cout << "1"
                     << " " << arr1[i] << endl;
                break;
            }
            c++;
        }
        if (c == n)
        {
            cout << "NO" << endl;
        }
        // arr1 = {0};
        // arr2 = {0};
        // arr3 = {0};
    }

    auto end = chrono::steady_clock::now();
    //cout << chrono::duration_cast<chrono::milliseconds>(end - start).count()<<endl;
    return 0;
}