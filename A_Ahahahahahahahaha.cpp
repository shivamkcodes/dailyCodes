#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <map>
#include <unordered_map>
#include <set>
#include <stack>
#include <queue>
#define in long long
#include <string>
using namespace std;
// NOT DONE>>>>>>>>>>
int main()
{

    in t;
    cin >> t;
    while (t--)
    {
        in n;
        cin >> n;
        vector<in> arr(n);
        for (in &it : arr)
            cin >> it;

        in sumEven = 0;
        in sumOdd = 0;
        vector<in> odd;
        vector<in> even;
        for (int i = 0; i < n; i++)
        {
            if (i & 1)
            {
                sumOdd += arr[i];
                odd.push_back(arr[i]);
            }
            else
            {
                sumEven += arr[i];
                even.push_back(arr[i]);
            }
        }
        // cout << sumEven << endl;
        // cout << sumOdd << endl;
        // cout << max(sumOdd, sumEven) << endl;

        if (sumOdd == sumEven)
        {
            cout << arr.size() << endl;
            for (in x : arr)
                cout << x << " ";
            cout << endl;
        }
        else
        {
            if (sumOdd < sumEven)
            {
                cout << even.size() << endl;

                for (in x : even)
                    cout << x << " ";
                cout << endl;
            }
            else if (sumOdd > sumEven)
            {
                cout << odd.size() << endl;

                for (in x : odd)
                    cout << x << " ";
                cout << endl;
            }
        }
    }
    return 0;
}