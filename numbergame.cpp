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

    in n;
    cin >> n;
    bool turn = 1; //1 means ashish............0 means fastest
    bool winner = 1;
    if (n > 1 && n & 1)
    {
        n = 1;
        winner = 1;
    }
    else if (n % 2 == 0 && n > 1)
    {
        n = n;
    }

    return 0;
}