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

    vector<int> brr;
    int min = arr[0];

    for (int x : arr)
    {
        if (x < min)
        {
            min = x;
        }
        brr.push_back(min);
    }

    int max = 0;
    int val;
    for (int i = 0; i < n; i++)
    {
        val = arr[i] - brr[i];
        if (val > max)
        {
            max = val;
        }
    }

    cout << max;

    return 0;
}