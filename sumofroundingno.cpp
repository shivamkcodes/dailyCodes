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
        cin >> n;
        int k = log10(n);
        int c = 0;
        // cout << k + 1;
        vector<int> arr;
        for (int i = 0; i < k + 1; i++)
        {
            int rem = n % 10;
            n = n / 10;
            if (rem != 0)
            {
                if (i == 0)
                {
                    arr.push_back(rem);
                    // cout << rem << " ";
                    /* code */
                    c++;
                }

                else if (i == 1)
                {
                    arr.push_back(rem * 10);
                    // cout << rem * 10 << " "; /* code */
                    c++;
                }
                else if (i == 2)
                {
                    arr.push_back(rem * 100);
                    // cout << rem * 100 << " "; /* code */
                    c++;
                }
                else if (i == 3)
                {
                    arr.push_back(rem * 1000);
                    // cout << rem * 1000 << " "; /* code */
                    c++;
                }
                else if (i == 4)
                {
                    arr.push_back(rem * 10000);
                    // cout << rem * 10000 << " "; /* code */
                    c++;
                }
                else if (i == 5)
                {
                    arr.push_back(rem * 100000);
                    // cout << rem * 10000 << " "; /* code */
                    c++;
                }
            }
        }

        cout << c << endl;
        for (int x : arr)
            cout << x << " ";
        cout << endl;
    }
    return 0;
}