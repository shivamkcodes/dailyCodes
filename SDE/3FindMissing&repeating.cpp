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
    vector<int> arr(n);
    for (int &it : arr)
        cin >> it;

    /*
    todo approach2 using hashTable......
    vector<int> brr(n + 1, 0);
    for (int i = 0; i < n; i++)
    {
        brr[arr[i]]++;
    }

    for (int i = 1; i < n + 1; i++)
    {
        if (brr[i] == 0)
        {
            cout << "missing no. is =>" << i << endl;
        }
        else if (brr[i] == 2)
        {
            cout << "repeating no is => " << i << endl;
        }
    }
*/
    /*

    todo=>  Approach 1
    sort(arr.begin(), arr.end());

    for (int i = 0; i < n; i++)
    {
        if (arr[i] != i + 1)
        {
            cout << "REapeating chracater is => " << arr[i] << endl;
            arr.erase(arr.begin() + i);
            break;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != i + 1)
        {
            cout << "MISSING chracter is  =>" << i + 1 << endl;
            break;
        }
    }

    */

    int x = arr[0];
    for (int i = 1; i < n - 1; i++)
    {
        int res = (arr[i] ^ arr[i + 1]);
        x = res ^ x;
    }
    cout << x;

    return 0;
}
// 2 3 3 1 6 5
// 1 1 2 3 4 6