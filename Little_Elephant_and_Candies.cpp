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
        in n, c;
        cin >> n >> c;
        vector<in> arr(n);
        for (in &it : arr)
            cin >> it;

        in sum = 0;
        for (int x : arr)
            sum += x;

        if (sum <= c)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
    return 0;
}