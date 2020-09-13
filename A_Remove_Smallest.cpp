#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <map>
#include <set>
#include <stack>
#include <queue>
#include <chrono>
#define in long long
#include <string>
using namespace std;

int main()
{
    auto start = chrono::steady_clock::now();
    in t;
    cin >> t;
    while (t--)
    {
        in n;
        cin>>n;
        vector<in>arr(n);
        in temp=arr.size();

        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }
        sort(arr.begin(), arr.end());
        for (int i = 1; i < n; i++)
        {
            if (abs(arr[i]-arr[i-1])<=1)
            {
                // /* code */
                temp--;

            }

        }

        if (temp==1)
        {
            /* code */
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }




    }
    // cout << "gugu";

    auto end = chrono::steady_clock::now();
    //cout << chrono::duration_cast<chrono::milliseconds>(end - start).count()<<endl;
    return 0;
}