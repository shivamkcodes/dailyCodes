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
    int n;
    cin >> n;
    vector<int> arr(n);
    vector<int> ans;
    stack<int> s;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    // for (int x : arr)
    //     cout << x;
    for (int i = n - 1; i >= 0; i--)
    {
        if (s.size() == 0)
        {
            ans.push_back(-1);
            // s.push(arr[i]);
        }

        else if (s.size() > 0 && s.top() > arr[i])
        {
            ans.push_back(s.top());
            // cout << "gugu";
        }

        else if (s.size() > 0 && s.top() <= arr[i])
        {
            while (s.size() > 0 &&
                   s.top() <= arr[i])
            {
                s.pop();
            }
            if (s.size() == 0)
            {
                ans.push_back(-1);
            }
            else
            {

                ans.push_back(s.top());
            }
            // cout << "gugu111";
        }
        s.push(arr[i]);
    }
    // for (int x : ans)
    //     cout << x << " ";

    for (int i = n - 1; i >= 0; i--)
    {
        cout << ans[i] << " ";
    }

    auto end = chrono::steady_clock::now();
    //cout << chrono::duration_cast<chrono::milliseconds>(end - start).count()<<endl;
    return 0;
}