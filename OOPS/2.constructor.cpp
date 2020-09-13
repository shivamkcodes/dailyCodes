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

class laptop
{

public:
    string name;
    int age;
    laptop()
    {
        cout << "MY name is" << name << endl;
        cout << " with age is" << age << endl;
    }
    laptop(string lname, int lage)
    {
        name = lname;
        age = lage;

        cout << "MY name is " << name << endl;
        cout << " with age is " << age << endl;
    }

    laptop(const laptop &m)
    {
        name = m.name;
        age = m.age;
        age += 100;

        cout << "MY name is " << name << endl;
        cout << " with age is " << age;
    }
    ~laptop()
    {
        cout << "DESTRUCTION" << age << endl;
    }
};

int main()
{
    // auto start = chrono::steady_clock::now();

    laptop l;
    laptop K("sam", 19);

    laptop m = K;
    // auto end = chrono::steady_clock::now();
    //cout << chrono::duration_cast<chrono::milliseconds>(end - start).count()<<endl;
    return 0;
}