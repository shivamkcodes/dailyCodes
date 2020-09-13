#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <map>
#include <set>
#include <stack>
#include <queue>
#include <chrono>
#define in long long
#include <string>
using namespace std;

int main()
{
    auto start = chrono::steady_clock::now();
    in t;
    cin >> t;
    while (t--)
    {
        in n;
        cin >> n;
        vector<in> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        // for (int x : arr)
        //     cout << x;
        for (int i = 0; i < n - 1; i++)
        {
            in s = arr[i] + arr[i + 1];
            for (int j = i + 2; j < n; j++)
            {
                if (arr[j] < s)
                {
                    cout << s << " " << endl;
                    break;
                }
            }

            // break;
        }
    }

    auto end = chrono::steady_clock::now();
    //cout << chrono::duration_cast<chrono::milliseconds>(end - start).count()<<endl;
    return 0;
}