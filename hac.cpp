#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <unordered_map>
#include <set>
#include <chrono>
#define in long long
#include <cstring>
using namespace std;

int main()
{
    // auto start = chrono::steady_clock::now();

    vector<int> arr;
    vector<int> brr;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int k;
        cin >> k;
        arr.push_back(k);
    }

    unordered_map<int, int> freq;
    int start = 0, end = 0, now = 0, l = 0;
    for (int i = 0; i < n; i++)
    {

        // mark the element visited
        freq[arr[i]]++;

        // if its visited first time, then increase
        // the counter of distinct elements by 1
        if (freq[arr[i]] == 1)
            now++;

    
        while (now > 2)
        {

            freq[arr[l]]--;

          
            if (freq[arr[l]] == 0)
                now--;

           
            l++;
        }

        
        if (i - l + 1 >= end - start + 1)
            end = i, start = l;
    }

    // print the longest sub-segment
    for (int i = start; i <= end; i++)
        // cout << arr[i] << " ";
        brr.push_back(arr[i]);

    bool val = 0;
    for (int i = 1; i < brr.size(); i++)
    {
        if (abs(brr[i] - brr[i - 1] == 1) || abs(brr[i] - brr[i - 1] == 0))
        {
            val = 1;
        }
        else
        {
            val = 0;
            break;
        }
    }
    if (val)
    {
        cout << brr.size();
    }
    else
    {
        cout << brr.size() - 1;
    }

    // auto end = chrono::steady_clock::now();
    //cout << chrono::duration_cast<chrono::milliseconds>(end - start).count()<<endl;
    return 0;
}