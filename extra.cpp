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

    // int n;
    // cin >> n;
    for (int i = 100; i <= 111; i++)
    {
        cout << i << " ";
        cout << digits(i);
        cout << endl;
    }

    return 0;
}