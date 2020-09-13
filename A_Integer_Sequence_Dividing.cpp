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

int main()
{

    int n;
    cin >> n;
    // vector<int> arr(n);
    in sum = 0;

    // for (int i = 1; i <= n; i++)

    // {
    //     sum += i;
    // }

    sum = n * (n + 1);
    sum /= 2;
    if (sum & 1)
    {
        cout << 1 << endl;
    }
    else
    {
        cout << 0 << endl;
    }

    return 0;
}