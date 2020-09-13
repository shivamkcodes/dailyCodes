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
    vector<in> arr;
    while (t--)
    {
        in n;
        cin >> n;
        arr.push_back(n);
    }
    sort(arr.begin(), arr.end());
    for (in i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << endl;
    }

    auto end = chrono::steady_clock::now();
    //cout << chrono::duration_cast<chrono::milliseconds>(end - start).count()<<endl;
    return 0;
}