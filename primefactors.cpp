#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <map>
#include <set>
#define in long long
#include <cstring>
using namespace std;

void primeFactors(int n)
{
    // Print the number of 2s that divide n
}
int main()
{

    // A function to print all prime
    // factors of a given number n

    // n must be odd at this point. So we can skip
    // one element (Note i = i +2)
    in n;
    cin >> n;
    while (n % 2 == 0)
    {
        cout << 2 << " ";
        n = n / 2;
    }
    for (int i = 3; i <= sqrt(n); i = i + 2)
    {
        // While i divides n, print i and divide n
        while (n % i == 0)
        {
            cout << i << " ";
            n = n / i;
        }
    }

    // This condition is to handle the case when n
    // is a prime number greater than 2
    if (n > 2)
        cout << n << " ";

    /* Driver code */

    // This is code is contributed by rathbhupendra

    return 0;
}