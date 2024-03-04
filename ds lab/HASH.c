#include <stdio.h>
#include <stdlib.h> 
#define MAX 10
int count=0;
struct employee
{
 int id;
 char name[15]; 
};
typedef struct employee EMP;
EMP emp[MAX];
int a[MAX];
int create(int num) 
{
 int key;
 key = num % 10; 
 return key;
 }
int getemp(EMP emp[],int key) 
 {
 printf("\nEnter emp id: "); 
scanf("%d",&emp[key].id); 
printf("\nEnter emp name: ");
scanf("%s",emp[key].name); 
return key;
}
void display() 
{
int i, ch;
printf("\n1.Display ALL\n2.Filtered Display"); 
printf("\nEnter the choice: "); 
scanf("%d",&ch);
if(ch == 1) 
{
printf("\nThe hash table is:\n"); 
printf("\nHTKey\tEmpID\tEmpName"); 
for(i=0; i<MAX; i++)
printf("\n%d\t%d\t%s", i, emp[i].id, emp[i].name);
}
else 
{
printf("\nThe hash table is:\n"); 
printf("\nHTKey\tEmpID\tEmpName"); 
for(i=0; i<MAX; i++)
if(a[i]!= -1)
printf("\n%d\t%d\t %s", i, emp[i].id, emp[i].name); 
} 
}
void linear_prob(int key) 
{
int i; 
if(count==MAX)
{
printf("Hash Table is full");
return;
}
if(a[key] == -1) 
{
a[key]=getemp(emp,key); 
count++;
}
else
{
printf("\nCollision Detected...!!!\n");
i=(key+1)%MAX;
printf("%d",i);
while(i < MAX||i<key) 
{
if (a[i]==-1)
{
a[i]=getemp(emp,i);
count++;
break;
}
else
i=(i+1)%MAX; 
}
}
} 
void main()
{
int num, key, i,x; 
printf("\nCollision handling by linear probing: "); 
for (i=0; i < MAX; i++)
a[i] = -1;
do 
{
printf("\nEnter the data: ");
scanf("%d", &num);
key=create(num);
linear_prob(key);
display(emp);
printf("\nDo you wish to continue? (1/0): "); 
scanf("%d",&x);
}while(x!=0); 
}
