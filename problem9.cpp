#include <iostream>
using namespace std;

class temprature
{
    public:
    float celsius;
    float fahrenheit;
};

int main()
{
    temprature t;
t.celsius = 258.96;
t.fahrenheit = t.celsius * 9 / 5  + 32;

cout << "farhrenheit:" << t.fahrenheit << endl;
return 0;

}