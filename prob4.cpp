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

    in n, target;
    cin >> n >> target;

    vector<in> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    bool val;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[i] + arr[j] == target)
            {
                cout << i << " " << j;
                // val = false;
                // break;
                exit(0);
            }
        }
        }

    auto end = chrono::steady_clock::now();
    //cout << chrono::duration_cast<chrono::milliseconds>(end - start).count()<<endl;
    return 0;
}

// 2 7 11 15