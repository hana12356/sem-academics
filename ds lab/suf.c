
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
void tower(int n,int source,int temp,int destination)
{
 if(n==0)
 return;
 tower(n-1,source,destination,temp);
 printf("\n move disc %d from %c to %c",n,source,destination);
 tower(n-1,temp,source,destination);
}
void push(float stk[],int *top,float op)
{
 *top=*top+1;
 stk[*top]=op;
}
int pop(float stk[],int *top)
{
 float res;
if(*top==-1)
 {
 printf("stack is underflow");
 return;
 }
 else
 {
 res=stk[*top];
 *top=*top-1;
 return res;
 }
}
float compute(float op1,float op2,char s)
{
switch(s)
{
case '+' : return (op1+op2);
case '-' : return (op1-op2);
case '*' : return (op1*op2);
case '/' : return (op1/op2);
case '$' :
case '^' : return pow(op2,op1);
}
}
void evalpostfix()
{
 char sym,post[20];
 int i=0,j=0,top=-1;
 float stk[20],item,op1,op2,res;
 printf("enter the valid postfix expn:");
 scanf("%s",post);
 while(post[i]!='\0')
 {
 sym=post[i++];
 if(isdigit(sym))
 {
 item=sym-'0';
 push(stk,&top,item);
 }
 else
 {
 op2=pop(stk,&top);
 op1=pop(stk,&top);
 res=compute(op1,op2,sym);
 push(stk,&top,res);
 }
 }
 res=pop(stk,&top);
printf("the result of evaluation of postfix expn is %f",res);
}
void main()
{
 int n,ch;
 printf("\n main menu");
while(1)
 {
 printf("\n 1.evalution of postfix expn");
 printf("\n 2.tower of honoi");
 printf("\n 3.exit");
 printf("\nenter your choice:");
 scanf("%d",&ch);
 switch(ch)
 {
 case 2: printf("\n enter the no. of discs :");
 scanf("%d",&n);
 tower(n,'A','B','C');
 printf("\n total no. of moves are"); 
 break;
 case 1: evalpostfix();
 break;
 case 3: exit(0);
 }
}
}

