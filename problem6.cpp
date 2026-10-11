#include <iostream>
using namespace std;

class circle
{
    public:
    float radius;
    float area;
};

int main ()
{
    circle c;
    c.radius = 7;
    c.area = 3.14 * c.radius * c.radius;

    cout << "3.14 * c.radius * c.radius:" << c.area << endl;
    return 0;
}