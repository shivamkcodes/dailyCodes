#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <map>
#include <set>
#include <chrono>
#define in long long
#include <cstring>
using namespace std;

int main()
{
    auto start = chrono::steady_clock::now();
    in x1, v1, x2, v2;
    cin >> x1 >> v1 >> x2 >> v2;
    vector<int> arr1;
    vector<int> arr;
    for (int i = x1; i < 10000; i = i + v1)
    {
        arr.push_back(i);
    }
    for (int i = x2; i < 10000; i = i + v2)
    {
        arr1.push_back(i);
    }
    // for (int x : arr)
    //     cout << x << " ";
    int c = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        // bool find = binary_search(arr1.begin(), arr1.end(), arr[i]);
        // if (find == 1 )
        // {
        //     cout << "YES";
        //     c++;
        //     break;
        // }
        if (arr[i] == arr1[i])
        {
            /* code */
            cout << "YES";
            c++;
            break;
        }
    }
    if (c == 0)
    {
        cout << "NO";
    }

    // cout<<"NO";

    auto end = chrono::steady_clock::now();
    //cout << chrono::duration_cast<chrono::milliseconds>(end - start).count()<<endl;
    return 0;
}