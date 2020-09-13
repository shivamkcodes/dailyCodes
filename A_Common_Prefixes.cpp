#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <map>
#include <set>
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
        vector<int> arr;
        vector<int> arr1;
        // vector<char>str;
        string str;
        in n;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            in k;
            cin >> k;
            arr.push_back(k);
        }
        arr1.push_back(arr[0]);
        for (int i = 1; i < n - 1; i++)
        {
            arr1.push_back(arr[i]);
            arr1.push_back(arr[i]);
        }
        arr1.push_back(arr[n - 1]);
        // for (int x : arr1)
        //     cout << x;

        for (int i = 0; i < arr1.size() - 1; i++)
        {
            // in len = min(arr[i], arr[i + 1]);
            in len1 = max(arr1[i], arr1[i + 1]);
            for (char i = 97, j = 1; i < 97 + len1; i++, j++)
            {
                if (j == 1)
                {
                    str.push_back(i);
                    /* code */
                }
                else
                {
                }
            }
            cout << str << endl;
        }
        cout << endl;
    }

    auto end = chrono::steady_clock::now();
    //cout << chrono::duration_cast<chrono::milliseconds>(end - start).count()<<endl;
    return 0;
}