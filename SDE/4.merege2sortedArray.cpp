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

    int n, m;
    cin >> n >> m;
    vector<int> arr(n);
    vector<int> brr(m);
    for (int &it : arr)
        cin >> it;
    for (int &it : brr)
        cin >> it;
    /*

    todo   This was the first approach..........
    vector<int> crr;
    for (int i = 0; i < n + m; i++)
    {
        if (i < n)
        {
            crr.push_back(arr[i]);
            
}
else
{
    crr.push_back(brr[i - n]);
}
}

sort(crr.begin(), crr.end());

arr.clear();
brr.clear();

for (int i = 0; i < n + m; i++)
{
    if (i < n)
    {
        arr.push_back(crr[i]);
    }
    else
    {
        brr.push_back(crr[i]);
    }
}

for (int x : arr)
    cout << x << " ";

cout << endl;

for (int x : brr)
    cout << x << " ";

*/

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > brr[0])
        {
            swap(arr[i], brr[0]);
            sort(brr.begin(), brr.end());
        }
    }

    for (int x : arr)
        cout << x << " ";

    cout << endl;

    for (int x : brr)
        cout << x << " ";

    return 0;
}

/*

6 4
1 5 9 10 15 20
2 3 8 13

*/