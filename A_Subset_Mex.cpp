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
int main()
{

    int val = 0, val1 = 0;
    in t;
    cin >> t;
    while (t--)
    {

        int n;
        cin >> n;
        vector<int> arr(n);
        vector<int> brr;
        vector<int> crr;

        unordered_map<int, int> mp;
        for (int &it : arr)
            cin >> it;

        for (int x : arr)
            mp[x]++;

        for (int i = 0; i < n; i++)
        {
            if (mp[arr[i]] & 1)
            {
                // cout << "brr"
                //      << "  " << mp[arr[i]] << "  " << arr[i] << endl;
                brr.push_back(arr[i]);
                mp[arr[i]]--;
            }
            else
            {
                crr.push_back(arr[i]);
                mp[arr[i]]--;

                // cout << "crr"
                //      << "  " << mp[arr[i]] << "  " << arr[i] << endl;
            }
        }

        // cout << brr.empty();

        // for (int x : brr)
        //     cout << x << " ";
        // for (int x : crr)
        //     cout << x << " ";

        bool isdone = true, isdone1 = true;

        if (brr.empty())
        {
            // cout << "brr is empty";
            val = 0;
            isdone = false;
        }

        if (isdone)
        {
            /* code */

            int maxi = *max_element(brr.begin(), brr.end());

            vector<int> brr1(maxi + 1, 0);
            for (int i = 0; i < brr.size(); i++)
            {
                brr1[brr[i]]++;
            }
            int i = 0;
            int c = 0;
            for (; i < brr1.size(); i++)
            {
                // brr1[brr[i]]++;
                if (brr1[i] == 0)
                {
                    val = i;
                    break;
                    // return i;
                }
                else
                {
                    c++;
                }
            }

            if (i == brr1.size())
            {
                // val = brr.back() + 1;
                val = maxi + 1;
            }
        }
        // working with 2nd pair

        if (crr.empty())
        {
            // cout << "crr is empty";

            val1 = 0;
            isdone1 = false;
        }

        if (isdone1)
        {
            /* code */

            int maxi1 = *max_element(crr.begin(), crr.end());

            vector<int> crr1(maxi1 + 1, 0);

            for (int i = 0; i < crr.size(); i++)
            {
                crr1[crr[i]]++;
            }
            int i1 = 0;
            int c1 = 0;
            for (; i1 < crr1.size(); i1++)
            {
                // brr1[brr[i]]++;
                if (crr1[i1] == 0)
                {
                    val1 = i1;
                    break;
                    // return i;
                }
                else
                {
                    c1++;
                }
            }

            if (i1 == crr.size())
            {
                // val1 = crr.back() + 1;
                val1 = *max_element(crr.begin(), crr.end()) + 1;
            }
        }

        // for (int x : brr)
        //     cout << x << " ";

        // cout << "     " << val << endl;
        // for (int x : crr)
        //     cout << x << " ";

        // cout << "      " << val1 << endl;

        // cout << val << " " << val1 << endl;
        cout << val + val1 << endl;
    }
    return 0;
}