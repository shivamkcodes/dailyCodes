#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <map>
#include <set>
#define in long long
#include <cstring>
using namespace std;
int fun(int a, int b)
{
    return a > b;
}
int main()
{

    set<int> arr;
    vector<int> brr;
    for (int i = 0; i < 4; i++)
    {
        int k;
        cin >> k;
        brr.push_back(k);
    }
    sort(brr.begin(), brr.end(), fun);

    // for (int x : brr)
    //     cout << x << endl;
    for (int i = 1; i < 4; i++)
    {
        cout << brr[0] - brr[i] << " ";
    }

    // for (int x : arr)
    //     cout << x << endl;
    return 0;
}