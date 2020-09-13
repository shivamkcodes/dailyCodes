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
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        int k;
        cin >> n;
        cin >> k;
        // vector<int> arr;
        string arr;
        int c = 0;
        cin >> arr;

        for (int i = 1; i < n; i++)
        {
            if (i == 0)
            {
            }

            if (arr[i] == '0')
            {
                if (arr[i - k] == '0' && arr[i + k] == '0')
                {
                    arr[i] = '1';
                    c++;
                }
            }

            if (i == n - 1)
            {
                if (arr[i] == '0' && arr[i - k] == '0')
                {
                    arr[i] = '1';
                    c++;
                }
            }
        }

        cout << c;
        cout << endl;
        arr.clear();
    }

    return 0;
}
