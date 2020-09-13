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
    vector<int> arr;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int k;
        cin >> k;
        arr.push_back(k);
    }
    // for (int j = 0; j < n; j++)
    // {

    int c = 0;
    sort(arr.begin(), arr.end());

    int min = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != 0)
        {
            min = arr[i];
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (arr[i] != 0)
        {
            arr[i] = arr[i] - min;
            c++;
        }
    }

    cout << c << " ";
    // }
    for (int x : arr)
        cout << x;
    return 0;
}