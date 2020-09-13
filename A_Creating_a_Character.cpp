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
    while (n--)
    {

        in a, b, c;
        cin >> a >> b >> c;

        // in diff = abs(a - b);
        if (a + c <= b)
        {
            cout << 0 << endl;
        }
        else
        {
            a += c;
            in diff = a - (b + 1);
            cout << min(diff / 2 + 1, c + 1) << endl;
        }
    }

    return 0;
}