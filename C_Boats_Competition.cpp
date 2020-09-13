#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <map>
#include <unordered_map>
#include <set>
#include <stack>
#include<queue>
#include <chrono>
#define in long long
#include <string>
using namespace std;




int maxCountSameSUM(vector<in>arr, int n)
{
    // Create a map to store frequency 
    unordered_map<int, int> M;
    set<pair<int, int> > s;
    // Store counts of sum of all pairs 
    // in the map 
    for (int i = 0; i < n - 1; i++)
        for (int j = i + 1; j < n; j++)
            // M[(arr[i] + arr[j])]++;
            s.insert(make_pair(arr[i], arr[j]));



    for (auto x: s)
        M[x.first+x.second]++;
    int max_count = 0;

    // Find maximum count 
    for (auto ele : M)
        if (max_count < ele.second)
            max_count = ele.second;


    // for (auto ele : M)
    //     cout<<ele.first<<"  "<<ele.second<<endl;
    return max_count;
}
int main() {
    auto start = chrono::steady_clock::now();
    in t;
    cin>>t;
    while (t--)
    {
        in n;
        cin>>n;
        vector<in>arr(n);
        for (in i = 0; i < n; i++)
        {
            cin>>arr[i];
        }

        cout << maxCountSameSUM(arr, n)<<endl;

    }

    auto end = chrono::steady_clock::now();
    //cout << chrono::duration_cast<chrono::milliseconds>(end - start).count()<<endl;
    return 0;
}