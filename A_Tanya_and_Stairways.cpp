#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <map>
#include <set>
#include <stack>
#include<queue>
#include <chrono>
#define in long long
#include <string>
using namespace std;

int main() {
    auto start = chrono::steady_clock::now();

    in n;
    cin>>n;
    vector<in>arr(n);

    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }



    in c1=0;


    // cout<<x<<" ";
// cout<<endl;

// cout<<count(arr.begin(), arr.end(), 1)<<endl;

    in c2=0;
    vector<in>brr;
    for (int i = 1; i < n; i++)
    {

        if (arr[i]==1)
        {
            c1++;
            // cout<<"GU";

            // in  val=i+1;
            brr.push_back(arr[i-1]);
        }

    }
    brr.push_back(arr[n-1]);


    cout<<c1+1<<endl;
    for (int x:brr)
        cout<<x<<" ";
    cout<<endl;

    auto end = chrono::steady_clock::now();
    //cout << chrono::duration_cast<chrono::milliseconds>(end - start).count()<<endl;
    return 0;
}