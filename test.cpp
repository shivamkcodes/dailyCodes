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
    int N = 2, M = 2;
    int arr[100][100] = {{1, 0}, {1, 0}};
    int sam = 0;

    for (int i = 0; i < M; i++)
    {
        int curr = 0;
        for (int j = 0; j < N; j++)
        {
            if (arr[i][j] != 0)
            {
                if (curr == 0)
                {
                    curr = arr[i][j];
                }
                else if (arr[i][j] != curr)
                {
                    //This row has different values
                    // return 1;
                    sam = 1;
                }
            }
        }
    }
    // return 0; //All rows have the same value
    // sam=0;
    cout << sam;

    // return 0;
}