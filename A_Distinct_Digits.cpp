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

vector<in> inde(10, 0);
bool digits(in n)
{
    while (n)
    {
        in rem = n % 10;
        inde[rem]++;
        n = n / 10;
    }

    in c = 0;
    bool ret = false;
    for (in i = 0; i < inde.size(); i++)
    {
        if (inde[i] >= 2)
        {

            ret = false;
            // cout << i << " is repeating";
            // inde.clear();
            fill(inde.begin(), inde.end(), 0);
        }
        else
        {

            c++;
        }
    }
    if (c == inde.size())
    {
        // cout << "nothing is repeating";
        ret = true;
        fill(inde.begin(), inde.end(), 0);

        // inde.clear();
    }
    return ret;
}

int main()
{

    in n, k;
    cin >> n >> k;

    in c = 0;
    for (in i = n; i <= k; i++)
    {
        bool val = digits(i);
        if (val == 1)
        {
            cout << i << endl;
            break;
        }
        else
        {
            c++;
        }

        // cout << i << " " << val << endl;
    }
    if (c == k - n + 1)
    {
        cout << -1;
    }

    // bool val = digits(98800);
    // bool val1 = digits(100);
    // bool val2 = digits(1000);
    // cout << val;
    // cout << val1;
    // cout << val2;

    return 0;
}