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

    // for (int x : arr)
    //     cout << x << " ";
    // cout << endl;
    // for (int x : brr)
    //     cout << x << " ";

    int i = 0;
    int j = 0;

    while (i < n && j < m)
    {

        if (arr[i] < brr[j])
        {
            crr.push_back(arr[i]);
            i++;
        }
        else if (brr[j] < arr[i])
        {
            crr.push_back(brr[j]);
            j++;
        }
    }

    if (i == n)
    {
        while (j < m)
        {
            crr.push_back(brr[j]);
            j++;
        }
    }
    else
    {
        while (i < n)
        {
            crr.push_back(arr[i]);
            i++;
        }
    }

    for (int x : crr)
        cout << x << " ";
    return 0;
}