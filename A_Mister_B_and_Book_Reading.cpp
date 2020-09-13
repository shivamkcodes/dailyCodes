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

    int c, vo, v1, a, l;
    cin >> c >> vo >> v1 >> a >> l;
    int var = vo;
    int t = 1;
    int add = vo;
    while (var < c)
    {
        add = min(v1, add + a); //thats the main logic
        var += add - l;
        t++;
    }
    cout << t;

    auto end = chrono::steady_clock::now();
    //cout << chrono::duration_cast<chrono::milliseconds>(end - start).count()<<endl;
    return 0;
}