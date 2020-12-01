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

    if (n & 1)
    {
        for (int x = 0; x < n - 1; x += 2)
        {
            // swap(arr[x,arr[x1]);
            swap(arr[x], arr[x + 1]);
        }
    }
    else
    {
        for (int x = 0; x < n; x += 2)
        {
            // swap(arr[x,arr[i+1]);
            swap(arr[x], arr[x + 1]);
        }
        }

    for (int x : arr)
        cout << x << " ";

    return 0;
}