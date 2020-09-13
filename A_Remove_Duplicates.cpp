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
    int n;
    cin >> n;
    vector<int> arr;
    vector<int> brr;
    set<int> s;
    for (int i = 0; i < n; i++)
    {
        int k;
        cin >> k;
        arr.push_back(k);
        // s.insert(k);
    }
    for (int i = n - 1; i >= 0; i--)
    {
        // auto itr = std::find(s.begin(), s.end(), arr[i]);
        if (s.find(arr[i]) == s.end())
        {
            brr.push_back(arr[i]);
            s.insert(arr[i]);
        }
    }
    cout << s.size() << endl;
    // for (int x : brr)
    //     cout << x;
    for (int i = brr.size() - 1; i >= 0; i--)
    {
        cout << brr[i] << " ";
    }
    cout << endl;

    auto end = chrono::steady_clock::now();
    //cout << chrono::duration_cast<chrono::milliseconds>(end - start).count()<<endl;
    return 0;
}