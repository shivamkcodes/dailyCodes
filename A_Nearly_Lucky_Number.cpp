// #include <iostream>
// #include <vector>
// #include <cmath>
// #include <algorithm>
// #include <map>
// #include <set>
// #include <chrono>
// #define in long long
// #include <cstring>
// using namespace std;

// int main()
// {
//     auto start = chrono::steady_clock::now();

//     in n;
//     cin >> n;
//     vector<int> arr;
//     while (n != 0)
//     {
//         in rem = n % 10;
//         if (rem == 4 || rem == 7)
//         {
//             n = n / 10;
//             arr.push_back(rem);
//         }
//         else
//         {
//             break;
//         }
//     }
//     // cout << n;
//     if (n == 0 && count(arr.begin(), arr.end(), 4) && count(arr.begin(), arr.end(), 7))
//     {
//         cout << "YES";
//     }
//     else
//     {
//         cout << "NO";
//     }

//     auto end = chrono::steady_clock::now();
//     //cout << chrono::duration_cast<chrono::milliseconds>(end - start).count()<<endl;
//     return 0;
// }

#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

int main()
{
    int cnt = 0, a = 0, r = 0, p = 0;
    char s[25];
    scanf("%s", s);
    for (int i = 0; i < strlen(s); i++)
        if (s[i] == '4' || s[i] == '7')
            cnt++;
    while (cnt > 0)
    {
        a = cnt % 10;
        cnt /= 10;
        p++;
        if (a == 4 || a == 7)
            r++;
    }
    if (r == p && r > 0)
        printf("YES");
    else
        printf("NO");
    return 0;
}