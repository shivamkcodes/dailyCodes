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
    string str;
    cin>>str;
    in c1=count(str.begin(), str.end(), 'L');
    // in c2=count(str.begin(), str.end(), 'R');
    in c2=n-c1;

    cout<<c1+c2+1;
    auto end = chrono::steady_clock::now();
    //cout << chrono::duration_cast<chrono::milliseconds>(end - start).count()<<endl;
    return 0;
}