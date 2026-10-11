#include <iostream>
#include <string>
using namespace std;

class student 
{
    public:
    string name;
    int rollno;
    string division;
    char batch;
    float CGPA;
};
int main()
{
    student student1;
student1.name = "dhairya bhavsar";
student1.rollno = 15;
student1.division = "soc17";
student1.batch = 'A';
student1.CGPA = 9.9;
 
cout << "name:" << student1.name << endl;
cout << "division:" << student1.division << endl;
cout << "batch:" << student1.batch << endl;
cout << "CGPA:" << student1.CGPA << endl;

    return 0;
}