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
bool is_integer(float k)
{
    return std::floor(k) == k;
}
int main()
{
    auto start = chrono::steady_clock::now();

    int n, m;
    cin >> n >> m;
    int c = 0;
    int c1 = 0;
    while (is_integer(sqrt(n)) == 0)
    {

        n--;
        c++;
        // m--;
        // c1++;
    }
    while (is_integer(sqrt(m)) == 0)
    {

        m--;
        c1++;
    }
    cout << c;
    cout << c1;
    if (c * c == m && c1 * c1 == n)
    {
        cout << "gugu";
    }
    // cout << m ;

    // cout << is_integer(sqrt(n));
    auto end = chrono::steady_clock::now();
    //cout << chrono::duration_cast<chrono::milliseconds>(end - start).count()<<endl;
    return 0;
}