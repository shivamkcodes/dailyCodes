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
    int n, k;
    cin >> n >> k;
    // multiset<int> arr;
    int c = 0;
    for (int i = 0; i < n; i++)
    {
        int input;
        cin >> input;
        // arr.insert(input + k);
        if (input + k <= 5)
        {
            c++;
        }
    }
    // for (int x : arr)
    //     cout << x << " ";
    // cout << endl;
    cout << c / 3;
    return 0;
}