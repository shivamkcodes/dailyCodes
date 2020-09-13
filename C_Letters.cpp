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

    in dor, letters;
    cin >> dor >> letters;
    vector<in> arr;
    vector<in> brr;
    for (int i = 0; i < dor; i++)
    {
        in k;
        cin >> k;
        arr.push_back(k);
    }
    for (int i = 0; i < letters; i++)
    {
        in k;
        cin >> k;
        brr.push_back(k);
    }
    in sum = 0;
    in idx = 1;

    in x = brr[0];
    while (sum + arr[idx])
    {
    }

    auto end = chrono::steady_clock::now();
    //cout << chrono::duration_cast<chrono::milliseconds>(end - start).count()<<endl;
    return 0;
}