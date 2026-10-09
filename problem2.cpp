#include <iostream>
#include <string>
using namespace std;

class employee
{
    public:
    string name;
    string ID;
    int salary;
};

int main()
{
     employee employee1;
    employee1.name = "aman pareta";
    employee1.ID = "2026soc0441";
    employee1.salary = 50000;

    cout << "name:" << employee1.name << endl;
    cout << "ID:" << employee1.ID << endl;
    cout << "salary:" << employee1.salary << endl;
    
return 0;
}