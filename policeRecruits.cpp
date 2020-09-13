#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <map>
#include <set>
#define in long long
#include <cstring>
using namespace std;

int main()
{

    int n;
    cin >> n;
    vector<int> arr;
    for (int i = 0; i < n; i++)
    {
        int k;
        cin >> k;
        arr.push_back(k);
    }
    int sum = 0;
    int var = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > 0)
        {
            sum += arr[i];
            /* code */
        }
        else if (arr[i] < 0 && sum > 0)
        {
            /* code */
            sum--;
        }
        else if (arr[i] < 0 && sum <= 0)
        {
            var--;
        }
    }
    cout << abs(var);
    return 0;
}