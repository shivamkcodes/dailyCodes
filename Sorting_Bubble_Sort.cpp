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

    in n;
    cin >> n;
    vector<in> arr;
    for (int i = 0; i < n; i++)
    {
        in k;
        cin >> k;
        arr.push_back(k);
    }

    in c = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            // Swap adjacent elements if they are in decreasing order
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                c++;
            }
        }
    }

    // for (int x : arr)
    //     cout << x;

    cout << "Array is sorted in" << c << "swaps." << endl;
    cout << "First Element:" << arr[0] << endl;
    cout << "Last Element:" << arr[n - 1] << endl;
    auto end = chrono::steady_clock::now();
    //cout << chrono::duration_cast<chrono::milliseconds>(end - start).count()<<endl;
    return 0;
}