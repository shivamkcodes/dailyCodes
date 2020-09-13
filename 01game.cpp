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

    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        string str;
        // getline(cin, str);
        cin >> str;
        set<int> brr;
        int k = 0;
        for (int i = 1; i < 1000; i = i + 4, k = k + 4)
        {
            brr.insert(i);
            brr.insert(k);
        }
        // for (int x : brr)
        //     cout << x << " ";

        bool w = binary_search(brr.begin(), brr.end(), str.size());
        // cout << w;
        if (w == 1)
        {
            cout << "NET" << endl;
        }
        else
        {
            cout << "DA" << endl;
        }
    }
    return 0;
}