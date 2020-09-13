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

int main()
{

    int n = 5;
    // cin >> n;
    vector<int> arr = {1, 4, 5, 7, 9};

    int start = 0;
    int end = n - 1;
    int s = 4;
    // cin >> s;
    int mid = (start + end) / 2;
    while (start < end)
    {

        if (arr[mid] == s)
        {
            cout << mid;
            // return;
            // break;
        }
        else if (arr[mid] < s)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }

    return 0;
}