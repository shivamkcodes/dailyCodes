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

class Resume
{

public:
    string name;
    string skill;
    int age;

    //constructor
    // Resume()
    // {
    //     cout << "MY name is" << name << " with age is" << age;
    // }
    void get()
    {
        cout << "Enter your name :";
        cin >> name;
        cout << "Enter your skill :";
        cin >> skill;
        cout << "Enter your age :";
        cin >> age;
    }

    void show()
    {
        cout << "Name of the person is " << name << endl;
        cout << "skill of the person is " << skill << endl;
        cout << "age of the person is " << age << endl;
    }
};

int main()
{
    auto start = chrono::steady_clock::now();

    Resume res1;
    res1.get();
    res1.show();

    auto end = chrono::steady_clock::now();
    //cout << chrono::duration_cast<chrono::milliseconds>(end - start).count()<<endl;
    return 0;
}