#include <iostream>
using namespace std;

class Rectangle
{
    public:
    float length;
    float breadth;
    float area;
};

int main()
{
    Rectangle r;
    r.length = 25;
    r.breadth = 25;
    r.area = r.length * r.breadth;

    cout << "length * breadth:" << r.length * r.breadth << endl;
    return 0;
}