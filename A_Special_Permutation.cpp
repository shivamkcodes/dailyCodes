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

bool isprime(int n)
{
    int flag = 0;
    if (n == 2 || n == 3)
        return true;
    if (n % 2 == 0 || n % 3 == 0)
        return false;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}
int main()
{

    in t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        if (n & 1)
        {
            int i = 1;
            int h = n / 2;
            while (n--)
            {

                // cout<<n+1<<" ";
                if (i == h)
                {
                    // cout << n / 2 - 1 << " ";
                    // cout << "shivam" << i;
                    cout << h + 1 << " ";
                }
                else if (i == h + 1)
                {
                    // cout << n / 2 << " ";
                    // cout << "gugu" << i;
                    cout << n + 2 << " ";
                }
                else
                {
                    cout << n + 1 << " ";
                }
                i++;
            }
        }
        else
        {
            while (n--)
            {
                cout << n + 1 << " ";
            }
        }

        cout << endl;
    }

    return 0;
}