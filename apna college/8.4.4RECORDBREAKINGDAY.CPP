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

    int n;
    cin >> n;
    vector<int> arr(n);
    for (int &it : arr)
        cin >> it;

    int max = INT_MIN;
    int c = 0;
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] > max && arr[i] > arr[i + 1])
        {

            max = arr[i];
            c++;
            // cout << arr[i] << endl;
        }
    }
    cout << c << endl;
    return 0;
}

/*
8
1 2 0 7 2 0 2 2
*/