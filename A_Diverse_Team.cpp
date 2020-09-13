#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <map>
#include <set>
#include <unordered_set>
#include <chrono>
#define in long long
#include <cstring>
using namespace std;

int main()
{
    auto start = chrono::steady_clock::now();

    in n, k;
    cin >> n >> k;
    vector<int> arr;
    vector<int> s;
    set<int> s1;
    for (int i = 0; i < n; i++)
    {
        in m;
        cin >> m;
        s.push_back(m);
        if (s1.find(m) == s1.end())
        {
            arr.push_back(m);
            s1.insert(m);
            /* code */
        }
    }
    // cout << s1.size() << " " << arr.size();
    // for (int x : s)
    //     cout << x << " ";
    if (s1.size() < k)
    {
        cout << "NO" << endl;
    }
    else
    {

        cout << "YES" << endl;
        // for (auto i = arr.begin(); i != arr.end(); i++)
        // {
        for (int i = 0; i < k; i++)
        {

            int ser = arr[i];

            // std::find function call
            auto it = std::find(s.begin(), s.end(), ser);
            if (it != arr.end())
            {
                // std::cout << "Element " << ser << " found at position : ";
                auto temp = it - s.begin();
                cout << temp + 1 << " ";
            }
        }
    }

    auto end = chrono::steady_clock::now();
    //cout << chrono::duration_cast<chrono::milliseconds>(end - start).count()<<endl;
    return 0;
}