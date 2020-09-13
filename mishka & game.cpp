#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <map>
#include <set>
#define in long long
#include <cstring>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int mishka = 0;
    int chris = 0;
    int tie = 0;
    for (int i = 0; i < n; i++)
    {
        int m;
        int c;
        cin >> m >> c;
        if (m > c)
        {
            mishka++;
        }
        else if (c > m)
        {
            chris++;
        }
        else if (c == m)
        {
            tie++;
        }
    }
    if (mishka > chris)
    {
        cout << "Mishka";
    }
    else if (chris > mishka)
    {
        cout << "Chris";
    }
    else if (chris == mishka)
    {
        /* code */
        cout << "Friendship is magic!^^";
    }

    return 0;
}