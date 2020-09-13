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

// bool check(int n, vector<int> arr)
// {
//     return binary_search(arr.begin(), arr.end(), n);
// }
int main()
{
    auto start = chrono::steady_clock::now();

    in n;
    cin >> n;
    vector<int> arr;
    for (int i = 0; i < n; i++)
    {
        in k;
        cin >> k;
        arr.push_back(k);
    }
    sort(arr.begin(), arr.end());
    int sum = 10;
    for (int x : arr)
    {

        bool ret = binary_search(arr.begin(), arr.end(), sum - x);
        if (ret && x != sum - x && x > sum - x)
        {
            cout << x << " " << sum - x << endl;
            /* code */
        }
    }

    auto end = chrono::steady_clock::now();
    //cout << chrono::duration_cast<chrono::milliseconds>(end - start).count()<<endl;
    return 0;
}