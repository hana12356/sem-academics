#include<stdio.h>
#include<stdlib.h>
struct studentnode
{
 char usn[11];
 char name[30];
 char branch[5];
 int sem;
 char phno[11];
 struct studentnode *link;
};
typedef struct studentnode *NODE;
NODE getnode()
{
 NODE newnode;
 newnode=(NODE)malloc(sizeof(struct studentnode));
 if(newnode==NULL)
 return NULL;
 printf("\nenter usn,name,branch,sem,ph.no\n");
 scanf("%s%s%s",newnode->usn,newnode->name,newnode->branch);
 scanf("%d%s",&newnode->sem,newnode->phno);
 newnode->link=NULL;
 return newnode;
}
void display(NODE first)
{
 NODE cur;
 int count=0;
 if(first==NULL)
 printf("\nempty list-no student data\n");
 else
 {
 cur=first;
 printf("\n \t\t student data\t\n");
 printf("\n USN \t NAME \t BRANCH \t SEM \t PH.NO\n");
 printf("\n%s \t %s\t %s\t %d\t %s\t",cur->usn,cur->name,cur->branch,cur->sem,cur->phno);
 cur=cur->link;
 count=count+1;
 }
 printf("the no. of nodes in the list is %d",count);
 }

NODE insertfront(NODE first)
{
NODE newnode;
newnode=getnode();
if(newnode==NULL)
 printf("memory not available");
else
 newnode->link=first;
 return newnode;
}
NODE insertrear(NODE first)
{
 NODE newnode,cur=first;
 newnode=getnode();
 if(newnode==NULL)
 return newnode;
 while(cur->link!=NULL)
 cur=cur->link;
 cur->link=newnode;
 return first;
}
NODE deletefront(NODE first)
{
 NODE temp;
 if(first==NULL)
 printf("\n list is empty");
else
{
 temp=first;
 first=first->link;
 free(temp);
}
return first;
}
NODE deleterear(NODE first)
{
NODE cur=first,prev=first;
if(first==NULL)
{
printf("\nlist is empty");
 return;
}
if(first->link==NULL)
{
 free(first);
 first=NULL;
}
else
{
 while(cur->link!=NULL)
 {
 prev=cur;
 cur=cur->link;
 }
 free(cur);
 prev->link=NULL;
}
return first;
}
NODE stacksimulation(NODE first)
{
int ch;
 while(ch!=3)
 {
 printf("\n SLL used as stack");
 printf("\n 1.push(insert at front)\t 2.pop(delete at front)\t 3.exit");
 printf("enter your choice:");
 scanf("%d",&ch);
 switch(ch)
 {
 case 1 : first=insertfront(first);
 break;
 case 2 : first=deletefront(first);
 break;
 case 3 : return first;
 }//while(ch!=3);
 display(first);
return first;
}
}
NODE createlist(NODE first)
{
 int i,n;
 printf("enter the no. of student we need to add to list:");
 scanf("%d",&n);
 for(i=0;i<n;i++)
 first=insertfront(first);
 return first;
}
int main()
{
 int ch;
 NODE first;first=NULL;
 printf("\n-------student database--------\n");
 while(1)
 {
 printf("\n1.create \t 2.insert front \t 3.insert rear \t 4.delete front \n 5.deleterear \t 6.stack simulation \t 7.display\t 8.exit");
 printf("\nenter choice:");
 scanf("%d",&ch);
 switch(ch)
 {
 case 1 : first=createlist(first);
 break;
 case 2 : first=insertfront(first);
 break;
 case 3 : first=insertrear(first);
 break;
 case 4 : first=deletefront(first);
 break;
 case 5 : first=deleterear(first);
 break;
 case 6 : first=stacksimulation(first);
 break;
 case 7 : display(first);
 break;
 case 8 : exit(0);
 }
}
}