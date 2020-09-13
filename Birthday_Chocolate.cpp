#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <map>
#include <set>
#include <chrono>
#include <numeric>
#define in long long
#include <cstring>
using namespace std;

int main()
{
    auto start = chrono::steady_clock::now();

    in n;
    cin >> n;
    vector<int> s;
    for (int i = 0; i < n; i++)
    {
        in k;
        cin >> k;
        s.push_back(k);
    }

    in d, m;
    cin >> d >> m;

    // int solve(int n, vector < int > s, int d, int m){
    int ways = 0;
    for (auto it = s.begin(); it != s.end(); ++it)
    {
        if (d == std::accumulate(it, it + m, 0))
            ways++;
    }
    // return ways;
    // }
    cout << ways;
    auto end = chrono::steady_clock::now();
    //cout << chrono::duration_cast<chrono::milliseconds>(end - start).count()<<endl;
    return 0;
}