#include <iostream>
#include <string>
using namespace std;
 
class employee
{
    public:
    string ID;
    string name;
    int salary;
};

int main()
{
    employee employee1;
    employee1.ID = "2026soc3230";
    employee1.name = "dhairya bhavsar";
    employee1.salary = 50000;

    cout << "ID:" << employee1.ID << endl;
    cout << "name:" << employee1.name << endl;
    cout << "name:" << employee1.salary << endl;
return 0;
}