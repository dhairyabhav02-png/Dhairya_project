#include <iostream>
using namespace std;

class marks
{
    public:
    float m1;
    float m2;
    float m3;
    float average;

};

int main()
{
    marks m;
    m.m1 = 93;
    m.m2 = 96;
    m.m3 = 97;
    m.average = m.m1 + m.m2 + m.m3 / 3;

    cout << "average:" << m.average << endl;
    return 0;

}