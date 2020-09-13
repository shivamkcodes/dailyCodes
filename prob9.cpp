#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <map>
#include <unordered_map>
#include <set>
#include <stack>
#include <queue>
#define in long long
#include <string>
using namespace std;

// #include <bits/stdc++.h>
// using namespace std;

void printUnsorted(int arr[], int n)
{
    int s = 0, e = n - 1, i, max, min;

    // step 1(a) of above algo
    for (s = 0; s < n - 1; s++)
    {
        if (arr[s] > arr[s + 1])
            break;
    }
    if (s == n - 1)
    {
        cout << "The complete array is sorted";
        return;
    }

    // step 1(b) of above algo
    for (e = n - 1; e > 0; e--)
    {
        if (arr[e] < arr[e - 1])
            break;
    }

    // step 2(a) of above algo
    max = arr[s];
    min = arr[s];
    for (i = s + 1; i <= e; i++)
    {
        if (arr[i] > max)
            max = arr[i];
        if (arr[i] < min)
            min = arr[i];
    }

    // step 2(b) of above algo
    for (i = 0; i < s; i++)
    {
        if (arr[i] > min)
        {
            s = i;
            break;
        }
    }

    // step 2(c) of above algo
    for (i = n - 1; i >= e + 1; i--)
    {
        if (arr[i] < max)
        {
            e = i;
            break;
        }
    }

    // step 3 of above algo
    cout << "The unsorted subarray which"
         << " makes the given array" << endl
         << "sorted lies between the indees "
         << s << " and " << e;
    return;
}

// int main()
// {

//     int n;
//     cin >> n;
//     vector<int> arr(n);
//     for (int &it : arr)
//         cin >> it;

//     // for (int x : arr)
//     //     cout << x << " ";

//     int i, min, max, beg, end;
//     beg = 0;
//     end = n - 1;

//     for (beg = 0; beg < n - 1; beg++)
//     {
//         if (arr[beg] > arr[beg + 1])
//         {
//             break;
//         }
//     }

//     if (beg == n - 1)
//     {
//         cout << "ARRAY is already sorted";
//         exit(0);
//     }

//     for (int end = n - 1; end >= 0; end--)
//     {
//         if (arr[end] < arr[end - 1])
//         {
//             break;
//         }
//     }

//     max = arr[beg];
//     min = arr[end];

//     for (i = beg + 1; i <= end; i++)
//     {
//         if (arr[i] > max)
//         {
//             max = arr[i];
//         }
//         if (arr[i] < min)
//         {
//             min = arr[i];
//         }
//     }

//     for (i = beg; i < n; i++)
//     {
//         if (arr[i] > max)
//         {
//             beg = i;
//             break;
//         }
//     }

//     for (int i = n - 1; i >= end + 1; i--)
//     {
//         if (arr[i] < min)
//         {
//             end = i;
//             break;
//         }
//     }

//     cout << beg << " " << end;
//     return 0;
// }
// 2, 6, 4, 8, 10, 9, 15
// 1,2,4,7,10,11,7,12,6,7,16,18,19
// 10, 12, 20, 30, 25,
//  40, 32, 31, 35, 50, 60

int main()
{
    // int arr[] = {1, 2, 4, 7, 10, 11, 7, 12, 6, 7, 16, 18, 19};
    // int arr[] = {2, 6, 4, 8, 10, 9, 15};
    int arr[] = {1, 3, 2, 4};
    int arr_size = sizeof(arr) / sizeof(arr[0]);
    printUnsorted(arr, arr_size);
    getchar();
    return 0;
}