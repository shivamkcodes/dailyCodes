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

    cout<<log2(2)<<endl;
    cout<<log2(21)<<endl;

    cout<<log2(4)<<endl;
    cout<<log2(8)<<endl;
    cout<<log2(16)<<endl;
    cout<<log2(32)<<endl;


    // cout<<"Enter The Number :\n";
    float n=log2(13);
    // cin>>n;


    auto end = chrono::steady_clock::now();
    //cout << chrono::duration_cast<chrono::milliseconds>(end - start).count()<<endl;
    return 0;
}