#include <iostream>
using namespace std;
int add(int a, int b)
{
 return a + b;
}
double add(double a, double b)
{
 return a + b;
}
int main()
{
 int intResult;
 double doubleResult;
 intResult = add(5, 10);
 cout << "Result of adding integers: " << intResult << endl;
 doubleResult = add(3.5, 7.2);
 cout << "Result of adding doubles: " << doubleResult << endl;
 return 0;
}