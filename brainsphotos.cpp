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

    int n, m;
    cin >> n >> m;
    int mul = n * m;
    vector<char> arr;
    for (int i = 0; i < mul; i++)
    {
        char k;
        cin >> k;
        arr.push_back(k);
    }
    // for (char x : arr)
    //     cout << x << " ";
    int c = 0;
    int c1 = 0;
    for (char i = 0; i < mul; i++)
    {
        if (arr[i] == 'C' || arr[i] == 'M' || arr[i] == 'Y')
        {
            cout << "#Color";
            exit(0);
        }
        // else if (arr[i] == 'W' || arr[i] == 'B' || arr[i] == 'G')
        // {
        //     c1++;
        // }
    }
    // cout << c;

    cout << "#Black&White";

    return 0;
}