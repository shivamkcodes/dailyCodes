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

    in t;
    cin>>t;
    while (t--)
    {
        in n;
        cin>>n;
        vector<in>arr;
        vector<in>brr;


        for (in i = 0; i < n; i++)
        {
            in k;
            cin>>k;

            arr.push_back(k);

            // cin>>arr[i];
        }
        for (in i = 0; i < n; i++)
        {
            // cin>>brr[i];
            in k;
            cin>>k;
            // if (k>minb)
            // {
            //     minb=k;
            // }
            brr.push_back(k);
        }

        in mina=arr[0];
        in minb=brr[0];
        for (in i = 0; i < n; i++)
        {
            if (arr[i]<mina)
            {
                mina=arr[i];
            }

        }
        for (in i = 0; i < n; i++)
        {
            if (brr[i]<minb)
            {
                minb=brr[i];
            }

        }


        // cout<<mina<<endl;
        // cout<<minb<<endl;


        in c=0;


        for (in i = 0; i < n; i++)
        {
            in var1=abs(arr[i]-mina);
            in var2=abs(brr[i]-minb);

            in var3=max(var1, var2);
            c+=var3;
            // cout<<var1<<endl;
            // cout<<var2<<endl;

        }

        cout<<c<<endl;

    }

    auto end = chrono::steady_clock::now();
    //cout << chrono::duration_cast<chrono::milliseconds>(end - start).count()<<endl;
    return 0;
}