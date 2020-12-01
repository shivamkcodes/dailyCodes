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

    int n;
    cin >> n;
    vector<int> arr(n);
    for (int &it : arr)
        cin >> it;

    int iniDiff = arr[1] - arr[0];
    int currDiff;
    int length = 2;
    int ans = 2;
    for (int i = 2; i < n; i++)
    {
        currDiff = arr[i] - arr[i - 1];
        if (iniDiff == currDiff)
        {
            length++;
            ans = max(ans, length);
        }
        else
        {
            iniDiff = currDiff;
            length = 2;
        }
    }
    cout << ans;

    return 0;
}

/*

7
10 7 4 6 8 10 11

*/