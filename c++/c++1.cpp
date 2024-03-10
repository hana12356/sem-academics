#include <iostream>
using namespace std;
class printmethods 
{
 public:
 void print(int i) 
 {
 cout << "integer value: " << i << endl;
 }
 void print(double f) 
 {
 cout << "floating value: " << f << endl;
 }
 void print(char* c) 
 {
 cout << "character value: " << c << endl;
 }
};
int main() 
{
 printmethods obj;
 obj.print(512); 
 obj.print(90.75); 
 obj.print("Podium");
 return 0;
}
