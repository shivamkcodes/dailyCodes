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
        in n;
        cin >> n;
        vector<int> arr;
        for (int i = 0; i < n; i++)
        {
            in k;
            cin >> k;
            arr.push_back(k);
        }
        in c = 0;

        for (in i = 0; i < n - 1; i++)
        {
            if (arr[i] == 1)
            {
                c++;
            }
            else
            {
                c += 2;
            }
        }
        c++;

        if (c & 1)
        {
            cout << "First" << endl;
        }
        else //even
        {
            cout << "Second" << endl;
        }
    }

    auto end = chrono::steady_clock::now();
    //cout << chrono::duration_cast<chrono::milliseconds>(end - start).count()<<endl;
    return 0;
}