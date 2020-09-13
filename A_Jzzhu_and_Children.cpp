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

    in n, m;
    cin >> n >> m;
    vector<int> arr(n);
    for (int &it : arr)
        cin >> it;

    int i = 0;
    while (count(arr.begin(), arr.end(), 0) != n - 1)
    {

        if (i > n - 1)
        {
            /* code */
            i = 0;
        }

        if (arr[i] < m)
        {
            arr[i] = 0;
            // arr.erase(arr.begin() + i);
        }
        else if (arr[i] >= m)
        {
            arr[i] = arr[i] - m;
        }
        // }
        i++;
    }

    for (int i = 0; i < n; i++)
    {
        if (arr[i] != 0)
        {
            cout << (i + 1);
            break;
        }
    }

    return 0;
}