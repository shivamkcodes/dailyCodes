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

    int n;
    cin >> n;
    vector<int> arr(n);
    for (int &it : arr)
        cin >> it;
    vector<int> brr(n);
    for (int &it : brr)
        cin >> it;

    // bool val = true;
    // for (int i = 0; i < n; i++)
    // {
    //     if (brr[i] != arr[i] - 1 && brr[i] != arr[i] + 1 && brr[i] != arr[i])
    //     {
    //         // cout << brr[i] << endl;
    //         val = false;
    //         break;
    //     }
    // }

    // if (val)
    // {
    //     cout << "Yes" << endl;
    // }
    // else
    // {
    //     cout << "No" << endl;
    // }

    int sumF = 0;
    int sumL = 0;
    for (int x : arr)
        sumF += x;

    for (int x : brr)
        sumL += x;

    if (sumL > sumF)
    {
        cout << "No" << endl;
    }
    else
    {
        cout << "Yes" << endl;
    }

    return 0;
}