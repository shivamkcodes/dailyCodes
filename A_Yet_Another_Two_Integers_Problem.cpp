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

    in n;
    cin >> n;
    while (n--)
    {

        in a, b;
        cin >> a >> b;

                in dif = abs(a - b);
        if (dif % 10 == 0)
        {
            cout << dif / 10 << endl;
        }
        else
        {
            cout << (dif / 10) + 1 << endl;
        }
    }

    return 0;
}