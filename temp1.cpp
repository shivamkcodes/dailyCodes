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

// int mex(vector<int> brr)
// {
// }

int main()
{

    //  int n;
    // cin >> n;
    // vector<int> arr(n);
    // for (int &it : arr)
    // cin >> it;

    vector<int> brr = {2, 5, 0, 1};

    int val, val1;
    if (brr.empty())
    {
        val = 0;
    }

    int maxi = *max_element(brr.begin(), brr.end());

    vector<int> brr1(maxi + 1, 0);

    for (int i = 0; i < brr.size(); i++)
    {
        brr1[brr[i]]++;
    }
    int i = 0;
    int c = 0;

    // for (int x : brr1)
    //     cout << x << " ";
    for (; i < brr1.size(); i++)
    {
        // brr1[brr[i]]++;
        if (brr1[i] == 0)
        {
            // cout << i;
            val = i;
            break;
            // break;
            // cout << i;
            // return i;
        }
        else
        {
            c++;
        }
    }

    if (i == brr1.size())
    {
        // val = brr.back() + 1;
        val = *max_element(brr.begin(), brr.end()) + 1;
    }

    // cout << brr1.empty();

    cout << val;
    return 0;
}