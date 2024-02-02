#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void stringmatch(char str[100],char pat[50],char rep[50])
{
int i=0,m=0,c=0,j=0,k=0,flag=0;
char ans[50];
while(str[c]!='\0')
{
if(str[m]==pat[i])
{
i++;
m++;
if(pat[i]=='\0')
{
flag=1;
for(k=0;rep[k]!='\0';k++,j++)
ans[j]=rep[k];
i=0;
c=m;
}
}
else
{
ans[j]=str[c];
j++;
c++;
m=c;i=0;
}
}
ans[j]='\0';
if(flag==1)
printf("\n The resultant string is \n %s",ans);
else
printf("\n Pattern string NOT found \n");
}
void readstring(char str[],char pat[],char rep[])
{
printf("\n Enter a main string \n");
gets(str);
printf("\n Enter a pattern string \n");
gets(pat);
printf("\n Enter a replace string \n");
gets(rep);
}
void main()
{
char str[100],pat[50],rep[50];
readstring(str,pat,rep);
stringmatch(str,pat,rep);
}
