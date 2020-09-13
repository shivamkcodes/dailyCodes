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

    string str1;
    string str2;

    cin>>str1;
    cin>>str2;

    // cout<<str1<<endl;
    // cout<<str2<<endl;

    in l1=str1.size();
    in l2=str2.size();

    // in m=max(l1, l2);

    in ans=l1+l2;
    while (str1[l1-1]==str2[l2-1] && l1>0 && l2>0)
    {
        l1--;
        l2--;
        ans--;
        ans--;
        // cout<<"GU";

    }

    cout<<ans;


    auto end = chrono::steady_clock::now();
    //cout << chrono::duration_cast<chrono::milliseconds>(end - start).count()<<endl;
    return 0;
}