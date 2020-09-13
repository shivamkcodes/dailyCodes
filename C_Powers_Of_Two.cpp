#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <map>
#include <unordered_map>
#include <set>
#include <stack>
#include <queue>
#define in long long
#include <string>
using namespace std;

unordered_map<int, int> mp;

void bin(unsigned n)
{
    unsigned i;
    for (i = 1 << 31; i > 0; i = i / 2)
        if (n & i)
            mp[i]++;
}
int main()
{

    int n, k;
    cin >> n >> k;
    bin(n);

    for (auto x : mp)
        cout << x.first << " " << x.second << endl;

    return 0;
}
