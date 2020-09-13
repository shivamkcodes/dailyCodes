#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <map>
#include <unordered_map>
#include <set>
#include <stack>
#include <queue>
#include <chrono>
#define in long long
#include <string>
using namespace std;

bool areSame(vector<in> a, int n)
{
    unordered_map<int, int> m; //hash map to store the frequency od every
                               //element

    for (int i = 0; i < n; i++)
        m[a[i]]++;

    if (m.size() == 1)
        return true;
    else
        return false;
}

int main()
{
    auto start = chrono::steady_clock::now();

    vector<in> arr = {7, 7, 7};
    cout << areSame(arr, 3);
    auto end = chrono::steady_clock::now();
    //cout << chrono::duration_cast<chrono::milliseconds>(end - start).count()<<endl;
    return 0;
}