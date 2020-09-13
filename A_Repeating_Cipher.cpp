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

    int n;
    cin >> n;

    string str, str1;
    cin >> str;
    str1.push_back(str[0]);
    int count = 1;
    for (char i = 1; i < n;)
    {
        str1.push_back(str[i]);
        count++;
        i += count;
    }
    cout << str1;

    return 0;
}