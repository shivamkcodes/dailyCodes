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

    string str;
    cin >> str;
    int c = 0;
    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] == 'H' || str[i] == 'Q' || str[i] == '9')
        {
            cout << "YES";
            break;
        }
        c++;
    }
    if (c == str.size())
    {
        cout << "NO";
    }

    auto end = chrono::steady_clock::now();
    //cout << chrono::duration_cast<chrono::milliseconds>(end - start).count()<<endl;
    return 0;
}