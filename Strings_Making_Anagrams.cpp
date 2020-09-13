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

    string a, b;
    cin >> a >> b;
    // map<char, int> mpa;
    // map<char, int> mpb;
    // for (int i = 0; i < a.size(); i++)
    // {
    //     mpa[a[i]]++;
    // }
    // for (int i = 0; i < a.size(); i++)
    // {
    //     mpb[b[i]]++;
    // }
    // for (auto i = mpa.begin(); i != mpa.end(); i++)
    // {
    //     cout << i->first << "  " << i->second;
    // }
    for (int i = 0; i < a.size(); i++)
    {
        if (b.find(a[i]) != b.end())
        {
            /* code */
        }
    }

    auto end = chrono::steady_clock::now();
    //cout << chrono::duration_cast<chrono::milliseconds>(end - start).count()<<endl;
    return 0;
}