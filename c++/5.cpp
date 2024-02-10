#include <iostream>
using namespace std;
int add(int a, int b)
{
return a + b;
}
int add(int a, int b, int c)
{
return a + b + c;
}
int main()
{
int sum1 = add(10, 20);
int sum2 = add(10, 20, 30);
cout << "Sum 1: " << sum1 << endl;
cout << "Sum 2: " << sum2 << endl;
return 0;
}