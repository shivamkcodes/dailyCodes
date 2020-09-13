#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int n;
        cin >> n;
        vector<int> arr(n - 1);
        for (int &it : arr)
            cin >> it;

        sort(arr.begin(), arr.end());

        int i = 0;
        for (; i < n; i++)
        {
            if (arr[i] != i + 1)
            {
                cout << i + 1 << endl;
                break;
            }
        }

        if (i == n)
        {
            cout << arr[n - 1] << endl;
        }

        // arr.clear();
    }
    return 0;
}