#include <iostream>
using namespace std;

class age 
{
    public:
    int age;
};

int main()
{
    age a;
    a.age = 18;

    cout << "age:" << a.age << endl;
    return 0;
}