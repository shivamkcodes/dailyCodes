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
    vector<bool> arr(n + 1, 1);
    arr[0] = 0;
    arr[1] = 0;

    for (int i = 2; i <= sqrt(n); i++)
    {
        if (arr[i])
        {
            for (int j = i * i; j <= n; j += i)
            {

                // if (j % i == 0)
                // {
                arr[j] = 0;
                // }
            }
        }
    }

    for (int i = 0; i < arr.size(); i++)
    {
        // cout << i << "  " << arr[i] << endl;
        if (arr[i])
        {
            cout << i << endl;
        }
    }

    return 0;
}