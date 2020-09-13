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

    int c0 = 0;
    int c1 = 0;
    int c2 = 0;
    for (int i = 0; i < n; i++)
    {

        if (arr[i] == 0)
        {
            c0++;
        }
        else if (arr[i] == 1)
        {
            c1++;
        }
        else if (arr[i] == 2)
        {
            c2++;
        }
    }

    // int i;
    // for (i = 0; i < c0; i++)
    // {
    //     arr[i] = 0;
    // }
    // while (c1--)
    // {
    //     arr[i] = 1;
    //     i++;
    // }
    // while (c2--)
    // {
    //     arr[i] = 2;
    //     i++;
    // }

    for (int i = 0; i < n; i++)
    {
        if (i < c0)
        {
            arr[i] = 0;
        }
        else if (i < (c0 + c1))
        {
            arr[i] = 1;
        }
        else
        {
            arr[i] = 2;
        }
    }

    for (int x : arr)
        cout << x << " ";

    return 0;
}
// 0 1 1 0 1 2 1 2 0 0 0 1
