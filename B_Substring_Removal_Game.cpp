#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <map>
#include <set>
#include <stack>
#include <queue>
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

        string str;
        cin >> str;
        vector<int> arr;
        in ans = 0;

        in c = 0;
        for (int i = 0; i < str.size();)
        {
            if (str[i] == '1')
            {
                int j = i;
                while (str[j] == '1')
                {
                    j++;
                }
                arr.push_back(j - i);
            }
            i = j - 1;

            cout << str << endl;
        }

        // cout << endl;
        // cout << str << endl;
    }
    auto end = chrono::steady_clock::now();
    //cout << chrono::duration_cast<chrono::milliseconds>(end - start).count()<<endl;
    return 0;
}