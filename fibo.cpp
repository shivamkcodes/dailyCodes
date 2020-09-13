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

    vector<int>v(10);
    v[0]=0;
    v[1]=1;

    for (int i = 2; i < 10; i++)
    {
        v[i]=(v[i-1]+v[i-2]);

    }

    for (int x:v)
        cout<<x<<" ";
    cout<<endl;
    auto end = chrono::steady_clock::now();
    //cout << chrono::duration_cast<chrono::milliseconds>(end - start).count()<<endl;
    return 0;
}