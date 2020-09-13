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

    string str;
    cin >> str;
    in k, ans;
    cin >> k;
    in Acount = count(str.begin(), str.end(), 'a');
    in div = k / str.size();
    in rem = k % str.size();
    // cout << div << " " << rem;
    ans = Acount * div;
    for (int i = 0; i < rem; i++)
    {
        if (str[i] == 'a')
        {
            ans++;
        }
    }
    cout << ans;
    auto end = chrono::steady_clock::now();
    //cout << chrono::duration_cast<chrono::milliseconds>(end - start).count()<<endl;
    return 0;
}