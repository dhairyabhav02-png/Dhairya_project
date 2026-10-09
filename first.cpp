#include <iostream>
#include <string>
using namespace std;

class student 
{
    public:
    string name;
    int rollno;
    float CGPA;
    char batch;
    string division;
};

int main()
{
    student s1;
    s1.name = "dhairya bhavsar";
    s1.rollno = 15;
    s1.CGPA = 9.9;
    s1.batch ='A';
    s1.division = "soc17";

    cout << "name:" << s1.name << endl;
    cout << "rollno:" << s1.rollno << endl;
    cout << "CGPA:" << s1.CGPA << endl;
    cout << "batch:" << s1.batch << endl;
    cout << "division:" << s1.division << endl;
return 0;
}