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
        in a, b, c;
        cin >> a >> b >> c;

        if (a == 2)
        {
            cout << b << " " << c << endl;
            // break;
        }
        else if (abs(c - b) <= a)
        {
            in diff = abs(c - b);
            cout << b << " ";
            for (int i = 0; i < a - 1; i++)
            {
                b += diff;
                cout << b << " ";
            }
            cout << endl;
        }
    }

    return 0;
}