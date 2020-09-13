#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <map>
#include <set>
#include <chrono>
#define in long long
#include <string>
using namespace std;

int main()
{
    auto start = chrono::steady_clock::now();

    in n;
    cin >> n;
    string str;
    // getline(str, cin);
    cin >> str;
    in u = 0;
    in d = 0;
    for (int i = 0; i < n; i++)
    {
        if (str[i] == 'U')
        {
            u++;
            // cout << "gu";
        }
        else if (str[i] == 'D')
        {
            // d++;
            // cout << "gu";
            u--;
        }
        if (str[i] == 'U' && u == 0)
        {
            d++;
        }
    }
    // cout << abs(u - d);
    cout << d;

    auto end = chrono::steady_clock::now();
    //cout << chrono::duration_cast<chrono::milliseconds>(end - start).count()<<endl;
    return 0;
}