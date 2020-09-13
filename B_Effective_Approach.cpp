#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <map>
#include <set>
#include <stack>
#include <queue>
#include <chrono>
#define in long long
#include <string>
using namespace std;

int main()
{
    auto start = chrono::steady_clock::now();
    in n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    in m;
    cin >> m;
    vector<int> brr(m);
    for (int i = 0; i < m; i++)
    {
        cin >> brr[i];
    }

    in c1 = 0;
    in c2 = 0;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (brr[i] == arr[j])
            {
                c1 += (j + 1);
                break;
            }
        }
    }

    for (int i = 0; i < m; i++)
    {
        for (int j = n - 1; j >= 0; j--)
        {
            if (brr[i] == arr[j])
            {
                c2 += n - j;
            }
        }
    }

    cout << c1 << " " << c2;

    auto end = chrono::steady_clock::now();
    //cout << chrono::duration_cast<chrono::milliseconds>(end - start).count()<<endl;
    return 0;
}