#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <map>
#include <set>
#define in long long
#include <cstring>
using namespace std;

int main()
{

    in n;
    cin >> n;

    vector<in> arr;
    for (in i = 0; i < n; i++)
    {
        in k;
        cin >> k;
        arr.push_back(k);
    }
    sort(arr.begin(), arr.end());
    for (auto x : arr)
        cout << x;

    return 0;
}