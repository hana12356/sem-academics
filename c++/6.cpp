#include<iostream>
using namespace std;
void printvalue(int A)
{cout << endl << "Value of A : " << A;
}
void printValue(char A)
{
cout << endl << "Value of A : " << A;
}
void printValue(float A)
{
cout << endl << "Value of A : " << A;
}
int main()
{
printValue(10);
printValue('@');
printValue(3.14f);
return 0;
}