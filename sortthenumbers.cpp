#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <map>
#include <set>
#define in long long
#include <cstring>
using namespace std;

int main()
{

    in n;
    cin >> n;
    multiset<int> arr;
    for (in i = 0; i < n; i++)
    {
        in k;
        cin >> k;
        arr.insert(k);
    }
    for (in x : arr)
    {
        cout << x << " ";
    }

    return 0;
}