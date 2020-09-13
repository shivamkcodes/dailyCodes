
// #include <iostream>
// #include <string.h>
// using namespace std;

// // Returns -1 if all characters of str are
// // unique.
// // Assumptions : (1) str contains only characters
// //                 from 'a' to 'z'
// //             (2) integers are stored using 32
// //                 bits
// int FirstRepeated(string str)
// {
//     // An integer to store presence/absence
//     // of 26 characters using its 32 bits.
//     int checker = 0;

//     for (int i = 0; i < str.length(); ++i)
//     {
//         int val = (str[i] - 1);

//         // If bit corresponding to current
//         // character is already set
//         if ((checker & (1 << val)) > 0)
//             return i;

//         // set bit in checker
//         checker |= (1 << val);
//     }

//     return -1;
// }

// // Driver code
// int main()
// {
//     string s = "01111001";
//     int i = FirstRepeated(s);
//     if (i != -1)
//         cout << "Char = " << s[i] << "   and Index = " << i;
//     else
//         cout << "No repeated Char";
//     return 0;
// }

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
    vector<in> arr = {1, 2, 3, 4, 4, 4, 5};
    auto itr = remove(arr.begin(), arr.end(), 4);
    arr.erase(itr, arr.end());

    for (int x : arr)
        cout << x << " ";

    auto end = chrono::steady_clock::now();
    //cout << chrono::duration_cast<chrono::milliseconds>(end - start).count()<<endl;
    return 0;
}