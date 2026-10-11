#include <iostream>
using namespace std;

class car
{
    public:
    string name;
    long long  price;
    string model;
    string regno;
};

int main()
{
    car c;
    c.name = "BMW";
    c.price = 9000000;
    c.model = "S5";
     c.regno = "2026BH3210";

cout << "name:" <<  c.name << endl;
cout << "price:" <<  c.price << endl;
cout << "model:" <<  c.model << endl;
cout << "regno:" <<  c.regno << endl;
return 0;

}