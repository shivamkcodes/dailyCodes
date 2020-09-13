#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <map>
#include <set>
#define in long long
#include <cstring>
using namespace std;

int mid(int x, int y)
{
    if (x == y)
    {
        return x;
    }
    else
    {
        return (x + y) / 2;
    }
}
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {

        in a, b, c, d;
        cin >> a >> b >> c >> d;
        cout << b << " ";
        cout << c << endl;
        cout << c << " ";
    }
    return 0;
}