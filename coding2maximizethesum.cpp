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

    int n, m;
    cin >> n;
    cin >> m;
    vector<int> arr(n);
    vector<int> brr(m);
    vector<int> crr;
    for (int &it : arr)
        cin >> it;

    for (int &it1 : brr)
        cin >> it1;

    int i = 0;
    int j = 0;
    int sum1 = 0;
    int sum2 = 0;
    int ans = 0;

    while (i < n && j < m)
    {
        if (arr[i] < brr[j])
        {
            sum1 += arr[i];
            i++;
        }

        else if (arr[i] > brr[j])
        {
            /* code */
            sum2 += brr[j];
            j++;
        }
        else if (arr[i] == brr[j])
        {
            /* code */
            ans = max(sum1, sum2);
            i++;
            j++;
            sum1 = 0;
            sum2 = 0;
        }
    }
    cout << ans << endl;
    return 0;
}
/*
6
5
1 5 10 15 20 25
2 4 5 9 15
*/