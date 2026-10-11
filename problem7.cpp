#include <iostream>
using namespace std;

class bankaccount 
{
    public:
    long long accountno;
    string name;
    long balance;
};

int main()
{
    bankaccount a;
    a.accountno = 10250100020963;
    a.name = "dhairya bhavsar";
    a.balance = 3000000;
    
    cout << "accountno:" << a.accountno << endl;
    cout << "name:" << a.name << endl;
    cout << "balance:" << a.balance << endl;
    return 0;
}