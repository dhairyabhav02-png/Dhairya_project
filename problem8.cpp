#include <iostream>
using namespace std;

class product 
{
    public:
    string ID;
    string name;
    int quantity;
    float price;
    int total;
};

int main()
{
    product p;
    p.ID = "26nike";
    p.name = "dhairya bhavsar";
    p.quantity = 15;
    p.price = 15000;
    p.total = p.quantity * p. price;

    cout << "ID:" << p.ID << endl;
    cout << "name:" << p.name << endl;
    cout << "quantity:" << p.quantity << endl;
    cout << "price:" << p.price << endl;
    cout << "total:" << p.total << endl;
    return 0;

}