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

string decToBinary(int n)
{
    // Size of an integer is assumed to be 32 bits
    string str;
    for (int i = 31; i >= 0; i--)
    {
        int k = n >> i;
        if (k & 1)
            // cout << "1";
            str.push_back('1');
        else
            // cout << "0";
            str.push_back('0');
    }
    // for (char i = 0; i < str.size(); i++)
    // {

    // }

    return str;
}

int main()
{
    auto start = chrono::steady_clock::now();
    // cout << sizeof(int);
    int n;
    cin >> n;
    in c = 1;
    string str = decToBinary(n);
    for (char i = 0; i < str.size() - 1; i++)
    {
        if (str[i] == '1' && str[i + 1] == '1')
        {
            c++;
        }
    }
    cout << c;
    auto end = chrono::steady_clock::now();
    //cout << chrono::duration_cast<chrono::milliseconds>(end - start).count()<<endl;
    return 0;
}