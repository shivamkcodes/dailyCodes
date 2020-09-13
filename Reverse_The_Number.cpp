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

    in t;
    cin >> t;
    while (t--)
    {
        in n;
        cin >> n;
        string str1 = to_string(n);
        reverse(str1.begin(), str1.end());
        cout << str1 << endl;
    }

    auto end = chrono::steady_clock::now();
    //cout << chrono::duration_cast<chrono::milliseconds>(end - start).count()<<endl;
    return 0;
}