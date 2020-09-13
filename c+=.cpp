#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <map>
#include <set>
#define in long long
#include <cstring>
using namespace std;

int main()
{
    in t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {

        in n, a, b;
        cin >> a >> b >> n;
        in max;
        in min;
        if (a > b)
        {
            max = a;
            min = b;
        }
        else
        {
            max = b;
            min = a;
        }
        in c = 0;
        while (min <= n && max <= n)
        {
            min += max;
            c++;
            in temp;
            temp = min;
            min = max;
            max = temp;
        }
        cout << c << endl;
    }
    return 0;
}