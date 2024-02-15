#include <iostream>
using namespace std;
class add
{
 public:
 int x = 20;
 int y = 30;
 void sum()
 {
 cout << " The sum of " << x << " and " << y << " is= " " "<<x+y << endl;
 }
};
class Mul
{
 public:
 int a = 20;
 int b = 30;
 void mul()
 {
 cout << " The Multiplication of " << a << " and " << b << " is =" " "<<a*b << endl;
 }
};
class Sub
{
 public:
 int a = 50;
 int b = 30;
 void sub()
 {
 cout << " The Subtraction of " << a << " and " << b << " is= " " "<<a-b << endl;
 }
};
class Div
{
 public:
 int a = 150;
 int b = 30;
 void divi()
 {
 cout << " The Division of " << a << " and " << b << " is =" " "<<a/b << endl;
 }
};
class derived: public add, public Div, public Sub, public Mul
{
 public:
 int p = 12;
 int q = 5;
 void mod()
 {
 cout << "The Modulus of " << p << " and " <<q << " is " " "<< p % q << endl;
 }
};
int main ()
{
 derived dr;
 dr.mod();
 dr.sum();
 dr.mul();
 dr.divi();
 dr.sub();
 return 0;
}