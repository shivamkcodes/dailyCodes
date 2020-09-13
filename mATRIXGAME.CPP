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
    int arr[50][50];
    int m, n;
    cin >> m >> n;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }
    int c = 0;
    bool sam = 0;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[i][j] != 1 && i == c)
            {
                sam = 1;
            }
            else
            {
                sam = 0;
            }
        }
        c++;
    }
    cout << sam;

    return 0;
}