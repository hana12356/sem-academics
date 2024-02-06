#include<iostream>
using namespace std;
int main()
{
 int i,j,temp,a[5]={2,4,3,1,5};
 cout<< "ascending order is"<<endl;
 for(i=0;i<5;i++)
 {
 j=i+1;
 while(j<5)
 {
 while(a[i]>a[j])
 {
 temp=a[i];
 a[i]=a[j];
 a[j]=temp;
 j++;
 }
 j++;
 }
 }
 for(i=0;i<5;i++)
 cout<<a[i]<<endl;
cout<<"decending order is"<<endl;
 for(i=0;i<5;i++)
 {
 j=i+1;
 while(j<5)
 {while(a[i]<a[j])
 {
 temp=a[i];
 a[i]=a[j];
 a[j]=temp;
 j++;
 }
 j++;
 }
 }
 for(i=0;i<5;i++)
 cout<<a[i]<<endl;
 return 0;
}