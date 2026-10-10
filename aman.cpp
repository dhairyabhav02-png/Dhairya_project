#include <iostream>
using namespace std;

class Rectangle {
public:
    double length;
    double breadth;

    void calculateArea() {
        double area = length * breadth;
        cout << "Area of Rectangle: " << area << endl;
    }
};

int main() {
    Rectangle r;

    cout << "Enter length: ";
    cin >> r.length;

    cout << "Enter breadth: ";
    cin >> r.breadth;

    r.calculateArea();

    return 0;
}
