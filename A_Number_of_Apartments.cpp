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
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        if (n % 2 == 0)
        {
            if (n % 3 != 0 && n % 7 != 0)
            {
                cout << -1 << endl;
            }
        }

        if (n % 3 == 0)
        {
            cout << n / 3 << " " << 0 << " " << 0 << endl;
        }
        else if (n % 5 == 0)
        {
            cout << 0 << " " << n / 5 << " " << 0 << endl;
        }
        else if (n % 7 == 0)
        {
            cout << 0 << " " << 0 << " " << n / 7 << endl;
        }
        else
        {
            
        }
        
    }

    return 0;
}