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
    // for (int &it : arr)
    // cin >> it;

    while (n--)
    {
        in a, b;
        cin >> a >> b;
        in diff = abs(b - a);
        cout << min(diff, b) << endl;
    }

    return 0;
}