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
        /* code */

        int n, a, b;
        cin >> n >> a >> b;
        vector<char> arr;
        for (char i = 97; i < 97 + b; i++)
        {
            arr.push_back(i);
        }
        // for (char i = 97; i < 97 + a - b; i++)
        // {
        //     arr.push_back(arr[i]);
        //     arr.push_back(arr[i]);
        // }
        // for (char i = 97; i < 97 + n - a; i++)
        // {
        //     arr.push_back(arr[i]);
        // }
        for (int i = 0; i < a - b; i++)
        {
            arr.push_back(arr[i]);
        }
        for (int i = 0; i < n - a; i++)
        {
            arr.push_back(arr[i]);
        }

        for (char x : arr)
            cout << x;
        cout << endl;
    }
    auto end = chrono::steady_clock::now();
    //cout << chrono::duration_cast<chrono::milliseconds>(end - start).count()<<endl;
    return 0;
}