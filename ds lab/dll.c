#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct node
{
int ssn;
char name[20];
char desi[20];
char dept[20];
int sal;
char ph[20];
struct node *llink,*rlink;
};
typedef struct node *NODE;
NODE getnode()
{
 temp=(NODE)malloc(sizeof(struct node));
printf("enter employee details");
printf("\nenter ssn,name,dept,desig,salary,phoneno.:\n");
scanf("%d",&temp->ssn);
 scanf("%s",temp->name);
 scanf("%s",temp->dept);
 scanf("%s",temp->desi);
 scanf("%d",&temp->sal);
 scanf("%s",temp->ph);
 return temp;
}
NODE insertfront(NODE first)
{
NODE temp;
temp=getnode();
if(first==NULL)
 return temp;
temp->rlink=first;
first->llink=temp;
temp->llink=NULL;
return temp;
}
NODE insertrear(NODE first)
{
NODE temp,cur;
temp=getnode();
if(first==NULL) return temp;
cur=first;
while(cur->rlink!=NULL)
cur=cur->rlink;
cur->rlink=temp;
temp->llink=cur;
temp->rlink=NULL;
return first;
}
NODE deletefront(NODE first)
{
NODE temp;
if(first==NULL)
 {
 printf("\nlist is empty");
 return;
 }
if(first->rlink==NULL)
{
 printf("\nemployee details deleted ssn:%d\n",first->ssn);
free(first);
return NULL;
}
temp=first->rlink;
temp->llink=NULL;
printf("\nemp details ssn:%d\n",first->ssn);
free(first);
return temp;
}
NODE deleterear(NODE first)
{
NODE temp,cur;
if(first==NULL)
 {
printf("\nempty list\n");
return;
 }
 if(first->rlink==NULL)
 {
printf("\nemp details ssn:%d\n",first->ssn);
free(first);
return NULL;
 }
 cur=first;
 while(cur->rlink!=NULL)
 cur=cur->rlink;
 temp=cur->llink;
 printf("\nemp details ssn:%d\n",cur->ssn);
 temp->rlink=NULL;
 free(cur);
 return first;
}
void display(NODE first)
{
NODE cur; int c=0;
if(first==NULL)
{
 printf("\nlist is empty\n");
return;
}
cur=first;
while(cur!=NULL)
 {
 printf("\n%d\n%d\n%s\n”, cur->ssn,cur->sal,cur->name);
 printf(“%s\n%s\n%s\n", ,cur->dept,cur->desi, cur->ph);
 cur=cur->rlink;
 c++;
 }
printf("\nno. of emp=%d\n",c);
}
NODE Dequesim(NODE first)
{
 int ch;
 while(1)
 {
printf("\n DLL used as Deque");
printf("\n 1.Insertfront\n2.Insertrear\n3.Deletefront”);
printf(“\4.Deleterear\n 5.Return");
printf("enter your choice:");
scanf("%d",&ch);
switch(ch)
 {
case 1 : first=insertfront(first);break;
case 2 : first=insertrear(first);break;
case 3 : first=deletefront(first);break;
case 4 : first=deleterear(first);break;
case 5 : return first;
 };
display(first);
return first;
}
}
void main()
{
NODE first;int ch; first=NULL;
 while(1)
 {
printf("\n1.insert front\t 2.insert rear\t 3.delete front\n”);
printf(“4.deleterear\t5.display\t 6.exit");
printf("\nEnter choice:");
scanf("%d",&ch);
switch(ch)
 { case 1 : printf(“\n enter No of employees”);
 scanf(“%d”,&n);
 for(i=0;i<n;i++)
 first=insertrear(first);
 break;
case 2 : first=insertfront(first);break;
case 3 : first=insertrear(first);break;
case 4 : first=deletefront(first);break;
case 5 : first=deleterear(first);break;
 case 6 : first =Dequesim(first);break;
case 7 : display(first);break;
case 8 : exit(0);
}
}
}