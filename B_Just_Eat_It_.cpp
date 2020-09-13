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

void fun(stack<in>s, in sum) {


    in temp=0;
    while (s.top()>=0 && s.size()>0)
    {
        /* code */
        temp+=s.top();
        s.pop();
    }

    if (temp>=sum)
    {
        cout<<"NO"<<endl;
        // return "NO";
    }

    else
    {
        while (s.top()<0 && s.size()>0)
        {
            s.pop();
        }

        fun(s, sum);
    }



}



int main() {
    auto start = chrono::steady_clock::now();

    in t;
    cin>>t;
    while (t--)
    {
        in n;
        cin>>n;
        vector<in>arr;
        bool val=false;
        in total=0;
        for (in i = 0; i < n; i++)
        {
            // cin>>arr[i];
            in k;
            cin>>k;
            arr.push_back(k);
            total+=k;

        }

        in i=0;
        in sum=0;
        for (; i < n; i++)
        {
            sum+=arr[i];
            // if (sum>=total)
            // {
            //     // cout<<"NO"<<endl;
            //     cout<<sum<<" "<<endl;
            //     // break;
            // }
            // else if (arr[i]<0)
            // {
            //     /* code */
            //     continue;
            //     sum=0;
            // }
            // else if (arr[i]>0)
            // {
            //     val=true;
            // }
            if (sum>total)
            {
                cout<<"NO"<<endl;
            }




        }
        if (val && i==n)
        {
            cout<<"YES"<<endl;
        }



















    }









    auto end = chrono::steady_clock::now();
    //cout << chrono::duration_cast<chrono::milliseconds>(end - start).count()<<endl;
    return 0;
}