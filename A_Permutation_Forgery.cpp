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

    in t;
    cin >> t;
    while (t--)
    {

        in n;
        cin >> n;
        vector<in> arr(n);
        for (in &it : arr)
            cin >> it;

        reverse(arr.begin(), arr.end());

        for (in x : arr)
            cout << x << " ";
        cout << endl;
    }
    return 0;
}