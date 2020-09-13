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

    int n;
    cin>>n;
    vector<int>arr(n);
    vector<int>brr(n, 1);

    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    for (int i = 1; i < n; i++)
    {
        for (int j = i; j >= 0; j--)
        {
            if (arr[j]<arr[i])
            {
                // brr[i]++;
                cout<<arr[j]<<"  "<<arr[i]<<endl;
            }
            else
            {
                break;
            }


        }

    }


    // for (int x:brr)
    //     cout<<x<<" ";
    // cout<<endl;


    auto end = chrono::steady_clock::now();
    //cout << chrono::duration_cast<chrono::milliseconds>(end - start).count()<<endl;
    return 0;
}
/*
 7
100 80 60 70 60 75 85

*/