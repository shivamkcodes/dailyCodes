// #include <bits/stdc++.h>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

#define ll long long int
#define watch(x) cout << (#x) << " is " << (x) << endl //watch function print variable and value for debugging
#define count_ones __builtin_popcountll                // count_ones(9) is equal to 2 valid for ll also
#define fast_io                       \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define fo(i, n) for (ll i = 0; i < n; i++)
using namespace std;

int main()
{
    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt", "r", stdin);
    //     freopen("output.txt", "w", stdout);
    // #endif
    //     fast_io

    string s;
    vector<char> v;
    cin >> s;
    cout << s;
    for (int i = 0; i < s.length(); i++)
    {
        while (s[i] != '+')
            v.push_back(s[i]);
    }

    // sort(v.begin(), v.end());

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << '+';
    }

    return 0;
}