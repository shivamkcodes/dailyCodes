#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <map>
#include <unordered_map>
#include <set>
#include <stack>
#include <queue>
#define in long long
#include <string>
using namespace std;

int main()
{

    int n, m;
    cin >> n >> m;
    string bigstr;
    while (n--)
    {
        string str;
        cin >> str;
        bigstr.append(str);
    }

    vector<int> arr(n);
    for (int &it : arr)
        cin >> it;

    map<int, char> mp;

    for (in i = 0, in j = 0; i < bigstr.size(); i++, j += m)
    {
        mp[bigstr[j]]++;

        
    }

    return 0;
}