#include <stdio.h>
#include<stdlib.h>
#define maxsize 4
void push(int s[],int *ptop,int ele)
{
  if(*ptop==(maxsize-1))
   printf("stack overflow\n");
   else
     s[++(*ptop)]=ele;
}
int pop(int s[],int *ptop)
{
    return s[(*ptop)--];
}
void palindrome(int v[],int top)
{
    int flag=1,i;
    for(i=0;i<top/2;i++,top--)
    if(v[i]!=v[top])
    {
      flag=0;
      break;
    }
    if(flag)
    printf("stack contents are palindrome\n");
    else
    printf("stack contents are not palindrome\n");
}
void display(int s[],int top)
{
    int i;
    if(top==-1)
    {
        printf("stack is empty\n");
    }
    else
    {
        printf("stack contents are\n");
        for(i=top;i>=0;i--)
        printf("[%d]\n",s[i]);
    }
}
void main()
{
    int s[maxsize],ele;
    int ch,top=-1,item;
    while(1)
    {
     printf(">>main menu<<\n");
     printf("\n1.push\n2.pop\n3.palindrome\n4.display\n5.exit\n");
     printf("printf enter your choice\n");
     scanf("%d",&ch);
     switch(ch)
     {
         case 1:printf("enter the element to be inserted:");
               scanf("%d",&item);
               push(s,&top,item);
               break;
        case 2:if(top==-1)
               printf("stack is overflow\n");
               else
               {
                   item=pop(s,&top);
                   printf("popped element is %d\n",item);
               }
               break;
        case 3:palindrome(s,top);
               break;
        case 4:display(s,top);
               break;
        case 5:exit(0);
               break;
        default:printf("invalid choice\n");
                break;
     }
    }
}