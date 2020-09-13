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

        in sum = 0;
        in min = arr[0];
        for (in x : arr)
        {

            if (x < min)
            {
                min = x;
            }

            sum += x;
        }

        cout << sum - (n * (min)) << endl;
    }

    return 0;
}