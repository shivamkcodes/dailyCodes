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

vector<int> check(in year)
{

    vector<int> arr;
    while (year != 0)
    {
        int rem = year % 10;
        arr.push_back(rem);
        year = year / 10;
    }
    return arr;
}

int main()
{
    auto start = chrono::steady_clock::now();

    in year1;
    cin >> year1;
    in year = year1 + 1;
    while (1)
    {
        /* code */
        in a, b, c, d;
        vector<int> arr;
        in temp = year;
        while (year != 0)
        {
            int rem = year % 10;
            arr.push_back(rem);
            // a=rem;
            year = year / 10;
        }
        year = temp;
        d = arr[0];
        c = arr[1];
        b = arr[2];
        a = arr[3];
        // cout << a << b << c << d;
        if (a == b || b == c || c == d || d == a || a == c || b == d)
        {

            year++;
        }
        else
        {
            cout << year;
            exit(0);
        }
    }

    auto end = chrono::steady_clock::now();
    //cout << chrono::duration_cast<chrono::milliseconds>(end - start).count()<<endl;
    return 0;
}