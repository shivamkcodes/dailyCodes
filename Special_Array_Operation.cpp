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

    in n, q;
    cin >> n >> q;

    priority_queue<int> maxh;
    priority_queue<int, vector<int>, greater<int>> minh;

    vector<int> v;
    int totalsum = 0;
    for (int i = 0; i < n; i++)
    {
        // cin >> v[i];
        in k;
        cin >> k;
        maxh.push(k);
        minh.push(k);
        totalsum += k;
        v.push_back(k);
    }

    for (int i = 0; i < q; i++)
    {
        int x;
        cin >> x;
        for (int i = 0; i < x; i++)
        {

            int max = maxh.top();
            int min = minh.top();
            int diff = max - min;
            maxh.pop();
            minh.pop();

            totalsum -= max;
            totalsum -= min;
            totalsum += diff;
        }
        cout << totalsum << endl;
    }

    auto end = chrono::steady_clock::now();
    //cout << chrono::duration_cast<chrono::milliseconds>(end - start).count()<<endl;
    return 0;
}