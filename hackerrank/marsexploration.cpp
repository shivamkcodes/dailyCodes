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

    string str;
    string str1;
    // cout << "Enter a string: ";
    getline(cin, str);
    int n = str.size() / 3;
    for (int i = 0; i < n; i++)
    {
        str1.append("SOS");
    }

    // cout << str1 << endl;
    int c = 0;
    for (int i = 0; i < str.size(); i++)
    {
        if (str1[i] != str[i])
        {
            c++;
        }
    }
    cout << c;
    return 0;
}