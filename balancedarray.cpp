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
        string str;
        int n;
        cin >> n;
        int rep = n / 2;
        if (rep % 2 == 0)
        {
            cout << "YES" << endl;
            str = "YES";
        }
        else
        {
            cout << "NO" << endl;
            // exit(0);
            str = "NO";
        }
        if (str == "YES")
        {
            /* code */

            int even = 2;
            int odd = 1;
            int sumeven = 0;
            int sumodd = 0;

            for (int i = 0; i < n; i = i + 2)
            {
                if (i & 1)
                {
                    cout << odd << " ";
                    odd += 2;
                }
                else
                {

                    cout << even << " ";
                    sumeven += even;
                    even += 2;
                }
            }
            for (int i = 1; i < n - 1; i = i + 2)
            {
                if (i & 1)
                {
                    cout << odd << " ";
                    sumodd += odd;
                    odd += 2;
                }
            }
            cout << sumeven - sumodd;

            cout << endl;
        } // cout << rep;
    }

    return 0;
}