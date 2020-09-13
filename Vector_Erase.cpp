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

    int n;
    cin >> n;

    vector<int> arr;

    for (int i = 0; i < n; i++)
    {
        int k;
        cin >> k;
        arr.push_back(k);
    }
    int m, s, o;
    cin >> m >> s >> o;
    arr.erase(arr.begin() + (m - 1));
    arr.erase(arr.begin() + (s - 1), arr.begin() + (o - 1));
    cout << arr.size() << endl;
    for (int x : arr)
        cout << x << " ";

    auto end = chrono::steady_clock::now();
    //cout << chrono::duration_cast<chrono::milliseconds>(end - start).count()<<endl;
    return 0;
}