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

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> arr;

        // arr.push_back(2);
        int cal = abs(n - k);

        // for (int i = 0; i < 1000; i++)
        // {
        //     // int rem = arr[i - 1] + k;
        //     int rem = i * k + 2;
        //     arr.push_back(rem);
        // }
        int i = 0;
        while (i * k + 2 < n)
        {

            i++;
        }
        cout << i + 1 << endl;

        // for (int i = 0; i < arr.size(); i++)
        // {
        //     if (arr[i] >= n)
        //     {
        //         cout << i + 1 << endl;
        //         break;
        //     }
        // }
    }

    return 0;
}