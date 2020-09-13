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

int binaryToDecimal(int n)
{
    int num = n;
    int dec_value = 0;

    // Initializing base value to 1, i.e 2^0
    int base = 1;

    int temp = num;
    while (temp)
    {
        int last_digit = temp % 10;
        temp = temp / 10;

        dec_value += last_digit * base;

        base = base * 2;
    }

    return dec_value;
}

int main()
{

    string str;
    cin >> str;

    int n = str.length();
    if (count(str.begin(), str.end(), '1') > 1)
    {
        cout << (n + 1) / 2;
    }
    else if (count(str.begin(), str.end(), '1') == 0)
    {
        cout << 0;
    }
    else
    {
        cout << n / 2;
    }

    return 0;
}