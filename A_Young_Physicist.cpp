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
    vector<int> arr;
    int sum1 = 0;
    int sum2 = 0;
    int sum3 = 0;

    for (int i = 0; i < n * 3; i++)
    {
        int k;
        cin >> k;
        // sum1 += k;
        arr.push_back(k);
    }
    for (int i = 0; i < n * 3; i = i + 3)
    {

        sum1 += arr[i];
    }
    for (int i = 1; i < n * 3; i = i + 3)
    {

        sum2 += arr[i];
    }
    for (int i = 2; i < n * 3; i = i + 3)
    {

        sum3 += arr[i];
    }
    // cout << sum1 << " " << sum2 << " " << sum3;
    if (sum1 == 0 && sum2 == 0 && sum3 == 0)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    auto end = chrono::steady_clock::now();
    //cout << chrono::duration_cast<chrono::milliseconds>(end - start).count()<<endl;
    return 0;
}