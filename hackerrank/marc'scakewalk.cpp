#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <map>
#include <set>
#define in long long
#include <cstring>
using namespace std;
//partially solved error in testcase 2 nd 3rd
int main()
{

    int n;
    cin >> n;
    set<int> arr;
    for (int i = 0; i < n; i++)
    {
        int k;
        cin >> k;
        arr.insert(k);
    }
    int key = 0;
    int s = 0;
    for (auto i = arr.rbegin(); i != arr.rend(); i++)
    {
        int val = (pow(2, key) * (*i));
        // cout << val << " ";
        s += val;
        key++;
    }
    cout << s;

    return 0;
}