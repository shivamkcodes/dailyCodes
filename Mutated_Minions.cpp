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

    in t;
    cin >> t;
    while (t--)
    {

        int n, k;
        cin >> n >> k;
        vector<int> arr;
        for (int i = 0; i < n; i++)
        {
            in m;
            cin >> m;
            arr.push_back(m + k);
        }

        in c = 0;
        for (int x : arr)
        {
            if (x % 7 == 0)
            {
                c++;
            }
        }

        cout << c << endl;
    }
    return 0;
}