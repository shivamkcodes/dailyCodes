#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <map>
#include <set>
#include <chrono>
#define in long long
#include <string>
using namespace std;

string leftrotate(string s, int d)
{
    reverse(s.begin(), s.begin() + d);
    reverse(s.begin() + d, s.end());
    reverse(s.begin(), s.end());
    return s;
}

// In-place rotates s towards right by d
string rightrotate(string s, int d)
{
    return leftrotate(s, s.length() - d);
    // cout << s << endl;
}
int main()
{
    auto start = chrono::steady_clock::now();
    int t;
    cin >> t;
    while (t--)
    {
        string str;
        cin >> str;
        string str1 = leftrotate(str, 1);
        cout << endl;
        string str2 = rightrotate(str, 1);
        cout << endl;

        if (str1 == str2)
        {
            cout << "0" << endl;
        }
        else
        {

            map<char, int> mp;
            set<int> s;
            for (int i = 0; i < str1.size(); i++)
            {
                mp[str1[i]]++;
            }
            int c = 0;
            for (auto i = mp.begin(); i != mp.end(); i++)
            {
                // cout << i->first << " " << i->second << endl;
                if (i->second == 1)
                {
                    c++;
                }
                else
                {
                    s.insert(i->second);
                }

                if (c == str1.size())
                {
                    cout << c - 2 << endl;
                    break;
                }
                else if (c != str1.size())
                {
                    cout << str1.size() - *s.begin() << endl;
                    break;
                }
            }
        }
    }

    auto end = chrono::steady_clock::now();
    //cout << chrono::duration_cast<chrono::milliseconds>(end - start).count()<<endl;
    return 0;
}