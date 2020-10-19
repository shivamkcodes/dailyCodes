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

    int n;
    cin >> n;
    // vector<int> arr(n);
    // for (int &it : arr)
    //     cin >> it;
    string str;
    cin >> str;

    int c = 0;
    for (int i = 1; i < n; i++)
    {
        if (str[i] == str[i - 1])
        {
            // cout << "gugu";
            c++;
        }
    }
    cout << c << endl;

    return 0;
}