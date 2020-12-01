#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <map>
#include <unordered_map>
#include <set>
#include <stack>
#include <queue>
#include <climits>
#define in long long
#include <string>
using namespace std;

bool isprime(int n)
{
    int flag = 0;
    if (n == 2 || n == 3)
        return true;
    if (n % 2 == 0 || n % 3 == 0)
        return false;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}
int main()
{

    // int n;
    // cin >> n;
    // vector<int> arr = {1, 0, 5, 4, 6, 8};
    vector<int> arr = {0, -9, 1, 3, -4, 5};
    // for (int &it : arr)
    //     cin >> it;

    int max = INT_MIN;
    for (int x : arr)
    {
        if (x > max)
        {
            max = x;
        }
        cout << max << endl;
    }
    return 0;
}