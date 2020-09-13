#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <map>
// #include <unordered_multimap>
#include <unordered_map>
#include <set>
#include <stack>
#include<queue>
#include <chrono>
#define in long long
#include <string>
using namespace std;


bool Isinteger(float n) {
    int res=n/1;

    if (n<=0 || n>=0 && res*1==n)
    {
        // cout<<"Entered Number Is An Integer.\n";
        return 1;
    }
    else
    {
        // cout<<"Entered Number Is Not An Integer.\n";
        return 0;
    }
}
int main() {
    auto start = chrono::steady_clock::now();

    in n;
    cin>>n;
    vector<in>arr(n);
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    // unordered_multimap
    unordered_multimap<in, in>mp;
    in c=0;
    for (in i = 0; i < n; i++)
    {
        for (in j = 0; j < n; j++)
        {

            if (Isinteger(log2(arr[i]+arr[j])) && i!=j) {
                mp.insert({ arr[i], arr[j] });
                break;
            }
            // else
            // {
            //     c++;
            // }


        }

    }

    // cout<<c;
    // for (auto x:mp)
    //     cout<<x.first<<"  "<<x.second<<endl;
    // cout<<endl;


    cout<<abs(n-mp.size());

    auto end = chrono::steady_clock::now();
    //cout << chrono::duration_cast<chrono::milliseconds>(end - start).count()<<endl;
    return 0;
}