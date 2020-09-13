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
    vector<int> v = {1, 1, 3, 5, 5};
    // int max = 3;
    // int min = 1;
    // cout << "before" << v.size();
    // in sum = 0;
    // auto itr = std::remove(v.begin(), v.end(), max);
    // v.erase(itr, v.end());
    // auto itr1 = std::remove(v.begin(), v.end(), min);
    // v.erase(itr1, v.end());
    // cout << "after" << v.size();
    in max = *v.rbegin();
    in min = *v.begin();
    in dif = max - min;
    v.erase(v.begin(), v.begin() + 1);
    v.erase(v.begin() + v.size() - 1, v.end());
    v.push_back(dif);
    for (int x : v)
        cout << x << " ";

    // for (int x : v)
    //     cout << x << " ";
    auto end = chrono::steady_clock::now();
    //cout << chrono::duration_cast<chrono::milliseconds>(end - start).count()<<endl;
    return 0;
}