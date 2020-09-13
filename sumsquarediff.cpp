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
    int n = 100;
    int sum = 0;
    int dig = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += (i * i);
    }
    for (int i = 1; i <= n; i++)
    {
        dig += i;
    }

    cout << sum << endl;
    cout << dig * dig << endl;
    cout << (dig * dig) - sum;

    return 0;
}