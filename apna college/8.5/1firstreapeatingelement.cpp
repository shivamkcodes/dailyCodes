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
    vector<int> brr(n, 0);

    for (int i = 0; i < n; i++)
    {
        if (brr[arr[i]] == 0)
        {
            brr[arr[i]]++;
            /* code */
        }
        // if (brr[arr[i]] > 1)
        else
        {
            cout << arr[i] << "with 0 based index" << i;
            break;
        }
    }
    // for (int x : brr)
    //     cout << x << " ";
    return 0;
}
/*
7
1 2 3 1 2 5 6
*/