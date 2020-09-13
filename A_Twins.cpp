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

//solved.........
int main()
{
    auto start = chrono::steady_clock::now();
    in n;
    cin >> n;
    vector<int> arr;
    for (int i = 0; i < n; i++)
    {
        int k;
        cin >> k;
        arr.push_back(k);
    }
    sort(arr.begin(), arr.end(), greater<>());
    int sum = 0;
    for (int x : arr)
        // cout << x;
        sum += x;
    int c = 0;

    int currSum = 0;
    while (currSum <= (sum / 2))
    {
        currSum += arr[c];
        c++;
    }

    cout << c << endl;
    auto end = chrono::steady_clock::now();
    //cout << chrono::duration_cast<chrono::milliseconds>(end - start).count()<<endl;
    return 0;
}