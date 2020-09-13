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
    cin >> t;
    while (t--)
    {
        /* code */
        in n;
        cin >> n;
        // string s = n;
        in length;
        in length1;
        length = log10(n);
        // length1 = length + 1;
        in num = 1;
        while ((length)--)
        {
            num *= 10;
        }
        // cout << num << endl;

        in first = n / num;
        in last = n % 10;
        // cout << last;
        // cout << first;
        cout << first + last << endl;
    }

    auto end = chrono::steady_clock::now();
    //cout << chrono::duration_cast<chrono::milliseconds>(end - start).count()<<endl;
    return 0;
}