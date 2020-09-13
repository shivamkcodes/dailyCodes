#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <map>
#include <set>
#include <stack>
#include<queue>
#include <chrono>
#define in long long
#include <string>
using namespace std;

int main() {
    auto start = chrono::steady_clock::now();
    string str;
    cin>>str;

    vector<int> v(str.begin(), str.end());
    for (auto x:v)
        cout<<x;



    auto end = chrono::steady_clock::now();
    //cout << chrono::duration_cast<chrono::milliseconds>(end - start).count()<<endl;
    return 0;
}


/*
#include <iostream>
#include <string>
#include <vector>

int main()
{
    std::string s = "Hello World!";

    std::vector<char> v(s.begin(), s.end());

    for (const char &c: v)
        std::cout << c;

    return 0;
}
*/