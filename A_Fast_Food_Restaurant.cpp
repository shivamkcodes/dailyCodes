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
        in a, b, c;
        cin >> a >> b >> c;
        in count = 0;
        if (a != 0)
        {
            count++;
            a--;
        }
        if (b != 0)
        {
            count++;
            b--;
        }
        if (c != 0)
        {
            count++;
            c--;
        }
        vector<in> arr;
        // arr[0] = a;
        // arr[1] = b;
        // arr[2] = c;
        arr.push_back(a);
        arr.push_back(b);
        arr.push_back(c);
        sort(arr.begin(), arr.end());
        // for (int x : arr)
        //     cout << x;
        if (arr[2] > 0 && arr[1] > 0)
        {
            count++;
            arr[1]--;
            arr[2]--;
        }
        // for (int x : arr)
        //     cout << x;
        if (arr[2] > 0 && arr[0] > 0)
        {
            count++;
            arr[0]--;
            arr[2]--;
        }
        if (arr[1] > 0 && arr[0] > 0)
        {
            count++;
            arr[1]--;
            arr[0]--;
        }
        if (arr[0] > 0 && arr[1] > 0 && arr[2] > 0)
        {
            count++;
        }

        cout << count << endl;
    }

    auto end = chrono::steady_clock::now();
    //cout << chrono::duration_cast<chrono::milliseconds>(end - start).count()<<endl;
    return 0;
}