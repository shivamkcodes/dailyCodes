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
        vector< pair<int, int>>v;
        for (int i = 0; i < n; i++)
        {
            in a, b;
            cin>>a>>b;
            v.push_back({ a, b });
        }

        sort(v.begin(), v.end());




        pair<int, int>beg=make_pair(0, 0);

        string s;
        bool check=true;
        for (auto i = 0; i < n; ++i)
        {
            int ri8=v[i].first-beg.first;
            int up=v[i].second-beg.second;
            if (ri8 <0 || up<0)
            {
                cout<<"NO"<<endl;
                check=false;
                break;
            }

            // s.push_back('R');
            // s.push_back('U');
            s+=string(ri8, 'R');
            s+=string(up, 'U');
            beg=v[i];
        }
        if (check)
        {
            cout<<"YES"<<endl;
            cout<<s<<endl;
            /* code */
        }


        // s.clear();

    }

    auto end = chrono::steady_clock::now();
    //cout << chrono::duration_cast<chrono::milliseconds>(end - start).count()<<endl;
    return 0;
}