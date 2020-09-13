#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <map>
#include <set>
#include <chrono>
#define in long long
#include <cstring>
using namespace std;

int main()
{
    auto start = chrono::steady_clock::now();

    in t;
    string str, a, b;
    cin >> t;
    while (t--)
    {
        in n;
        cin >> n;
        cin >> str;
        for (int i = 0; i < n; i++)
        {
            in k = 1;
            if (str[i] == '2')
            {
                if (k == 1)
                {
                    a[i] = '1';
                    b[i] = '1';
                }
                else
                {
                    a[i] = '0';
                    b[i] = '2';
                }
            }
            if (str[i] == '0')
            {
                a[i] = '0';
                b[i] = '0';
            }
            if (str[i] == '1')
            {
                if (k == 1)
                {
                    a[i] = '1';
                    b[i] = '0';
                    k--;
                }
                else
                {
                    a[i] = '0';
                    b[i] = '1';
                }
            }
        }

        // cout << a << endl;
        // cout << b << endl;
        for (int i = 0; i < n; i++)
        {
            cout << a[i];
        }
        cout << endl;
        for (int i = 0; i < n; i++)
        {
            cout << b[i];
        }
        cout << endl;
    }

    auto end = chrono::steady_clock::now();
    //cout << chrono::duration_cast<chrono::milliseconds>(end - start).count()<<endl;
    return 0;
}