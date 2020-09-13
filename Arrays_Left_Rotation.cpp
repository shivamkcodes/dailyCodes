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

    in n, k;
    cin >> n >> k;
    vector<int> arr;
    for (int i = 0; i < n; i++)
    {
        in k;
        cin >> k;
        arr.push_back(k);
    }
    for (int i = k; i < n; i++)
    {

        cout << arr[i] << " ";
    }

    for (int i = 0; i < k; i++)
    {
        cout << arr[i] << " ";
    }

    auto end = chrono::steady_clock::now();
    //cout << chrono::duration_cast<chrono::milliseconds>(end - start).count()<<endl;
    return 0;
}