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

    int x;
    cin >> x;

    // string str = to_string(x);
    auto str = std::to_string(x);

    reverse(str.begin(), str.end());

    cout << str;
    return 0;
}