#include<iostream>
using namespace std;
int main()
{
  double n1,n2,n3;
  cout<<"enter the value of three numbers:"<<endl;
  cin>>n1>>n2>>n3;
  if(n1>=n2&&n1>=n3)
  {
    cout<<"the largest number is:"<<n1<<endl;
  }
  else if(n2>=n1&&n2>=n3)
  {
    cout<<"the largest number is :"<<n2<<endl;
  }
  else
  {
    cout<<"the largest number is:"<<n3<<endl;
  }
  return 0;
}
