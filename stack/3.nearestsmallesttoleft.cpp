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
    vector<int> brr;
    stack<int> s;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (s.size() == 0)
        {
            brr.push_back(-1);
        }
        else if (s.size() > 0 && s.top() < arr[i])
        {
            brr.push_back(s.top());
        }
        else if (s.size() > 0 && s.top() >= arr[i])
        {
            while (s.size() > 0 && s.top() >= arr[i])
            {
                s.pop();
            }
            if (s.size() == 0)
            {
                brr.push_back(-1);
            }
            else
            {
                brr.push_back(s.top());
            }
        }
        s.push(arr[i]);
    }

    for (int x : brr)
        cout << x << " ";

    auto end = chrono::steady_clock::now();
    //cout << chrono::duration_cast<chrono::milliseconds>(end - start).count()<<endl;
    return 0;
}