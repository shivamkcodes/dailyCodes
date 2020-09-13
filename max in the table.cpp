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

    // vector<int>arr;
    int n;
    cin >> n;
    // int arr[n][n];
    vector<vector<int>> arr;
    set<int> brr;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i > 1 && j > 1)
            {
                // arr[i][j] = ((i - 1) * (j) + (i) * (j - 1));
                arr[i][j] = arr[i - 1][j] + arr[i][j - 1];
                // arr.push_back(arr[i - 1][j] + arr[i][j - 1]);
            }
            else
            {
                arr[i][j] = 1;
            }
            // cout << arr[i][j] << " ";
            brr.insert(arr[i][j]);
        }
        // cout << endl;
    }
    cout << *brr.rbegin();
    return 0;
}