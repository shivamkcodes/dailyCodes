#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <map>
#include <set>
#include <chrono>
#define in long long
#include <cstring>
using namespace std;

int main()
{
    auto start = chrono::steady_clock::now();

    in n;
    cin >> n;
    vector<int> arr;
    for (int i = 0; i < n; i++)
    {
        int k;
        cin >> k;
        arr.push_back(k);
    }
    in steps = 0;
    int i = 0;
    for (; i < n - 1;)
    {
        if (arr[i + 2] == 0 && (i + 2) < n)
        {
            steps++;
            i = i + 2;
        }
        else if (arr[i + 1] == 0 && (i + 1) < n)
        {
            steps++;
            i++;
        }
    }
    // cout << i;
    if (i == n - 1)
    {
        cout << steps;
        /* code */
    }

    auto end = chrono::steady_clock::now();
    //cout << chrono::duration_cast<chrono::milliseconds>(end - start).count()<<endl;
    return 0;
}