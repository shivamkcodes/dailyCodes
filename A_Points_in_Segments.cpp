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
    in n, m;
    cin >> n >> m;
    set<in> s;
    vector<in> arr;
    vector<in> brr;
    for (int i = 1; i <= m; i++)
    {
        arr.push_back(i);
    }

    for (int i = 0; i < n; i++)
    {
        in beg, end;
        cin >> beg >> end;
        for (int i = beg; i <= end; i++)
        {
            s.insert(i);
        }
    }

    for (int i = 0; i < m; i++)
    {
        if (s.find(arr[i]) == s.end())
        {
            brr.push_back(arr[i]);
        }
    }

    cout << brr.size() << endl;

    for (int x : brr)
        cout << x << " ";

    auto end = chrono::steady_clock::now();
    //cout << chrono::duration_cast<chrono::milliseconds>(end - start).count()<<endl;
    return 0;
}