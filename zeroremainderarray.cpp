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
    vector<in> arr;
    for (in i = 0; i < n; i++)
    {
        in m;
        cin >> m;
        arr.push_back(m);
    }

    int i = 1;
    while (1)
    {
    }

    auto end = chrono::steady_clock::now();
    //cout << chrono::duration_cast<chrono::milliseconds>(end - start).count()<<endl;
    return 0;
}