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
    // float n;
// cin>>n;
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


// A function to print all prime 
// factors of a given number n 
vector<in> primeFactors(int n)
{


    vector<in>v;
    while (n % 2 == 0)
    {
        // cout << 2 << " ";
        v.push_back(2);
        n = n/2;
    }


    for (int i = 3; i <= sqrt(n); i = i + 2)
    {

        while (n % i == 0)
        {
            // cout << i << " ";
            v.push_back(i);
            n = n/i;
        }
    }


    if (n > 2)
        // cout << n << " ";
        v.push_back(n);

    return v;
}


int main()
{
    in t;
    cin>>t;
    while (t--)
    {
        in n;
        cin>>n;

        vector<in> k=primeFactors(n);
        if (n%2==0)
        {
            if (Isinteger(log2(n)) && (k.size() & 1))
            {
                cout<<"NO"<<endl;
                break;
            }

        }



        // for (int x: k)
        //     cout<<x<<" ";


        if (k.size()<3)
        {
            cout<<"NO"<<endl;
            break;
        }

        else if (k.size()==3)
        {
            cout<<"YES"<<endl;
            cout<<k[0]<<" "<<k[1]<<" "<<k[2]<<endl;
        }


        cout<<endl;

    }

    return 0;
}

