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

    int a, b;
    cin >> a >> b;
    int min = 0;
    if (a > b)
    {
        min = b;
    }
    else if (b >= a)
    {
        min = a;
    }

    cout << min << " ";
    cout << ((a + b) - 2 * (min)) / 2;
    return 0;
}