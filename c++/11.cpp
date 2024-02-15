#include <iostream>
#include <stdexcept>
using namespace std;
int main()
{
 const int SIZE = 5;
 int arr[SIZE] = {1, 2, 3, 4, 5};
 int index;
 cout << "Enter the index to access: ";
 cin >> index;
 try
 {
 if (index < 0 || index >= SIZE)
 {
 throw out_of_range("Index out of bounds");
 }
 cout << "Value at index " << index << " is: " << arr[index] << endl;
 }
 catch (const out_of_range& ex)
 {
 cout<< "Exception: " << ex.what() << endl;
 }
 return 0;
}