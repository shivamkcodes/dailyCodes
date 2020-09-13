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

    vector<int> arr(10, 0);
    int n;
    cin >> n;
    string str;
    cin >> str;
    for (int i = 0; i < n; i++)
    {
        // cout << str[i];
        if (str[i] == 'L')
        {
            // arr.push_back(1);
            for (int i = 0; i < 10; i++)
            {
                if (arr[i] == 0)
                {
                    arr[i] = 1;
                    break;
                }
            }
        }
        else if (str[i] == 'R')
        {
            // arr.push_front(1);
            for (int i = 9; i >= 0; i--)
            {
                if (arr[i] == 0)
                {
                    arr[i] = 1;
                    break;
                }
            }
        }
        else
        {
            switch (str[i])
            {
            case '0':
                arr[0] = 0;
                break;
            case '1':
                arr[1] = 0;
                break;
            case '2':
                arr[2] = 0;
                break;
            case '3':
                arr[3] = 0;
                break;
            case '4':
                arr[4] = 0;
                break;
            case '5':
                arr[5] = 0;
                break;
            case '6':
                arr[6] = 0;
                break;
            case '7':
                arr[7] = 0;
                break;
            case '8':
                arr[8] = 0;
                break;
            case '9':
                arr[9] = 0;
                break;

            default:
                break;
            }
        }
    }

    for (int i = 0; i < 10; i++)
    {
        cout << arr[i];
    }

    return 0;
}