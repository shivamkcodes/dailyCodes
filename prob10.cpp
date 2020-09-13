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
    for (int &x : arr)
        cin >> x;

    int c = 0;
    for (int x = 0; x < n; x++)
    {

        if (arr[x] != 0)
        {

            cout << arr[x] << " ";
        }
        else
        {
            c++;
        }
    }
    for (int i = 0; i < c; i++)
    {
        cout << 0 << " ";
    }

    return 0;
}