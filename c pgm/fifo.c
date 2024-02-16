#include <stdio.h>
#include<stdbool.h>
int rs[100],count =0,f[10];
bool dataavi(int n)
{
int i;
for(i=0;i<n;i++)
{
if(rs[count]==f[i])
return 1;
}
return 0;
}

void fifo(int n,int m)
{
int fs=0,i=0,j=0,kom=0;
while(count<m)
{
if(count<n)
{
f[count]=rs[count++];
fs++;
kom=1;
}
else
{
if(dataavi(n))
{
count++;
kom=0;
}
else
{
kom=1;
f[j]=rs[count++];
fs++;
j++;
if(j>=n)
j=0;
}
}
if(kom==1)
printf(" Page Fault :");
else
printf("            :");
for(i=0;i<n;i++)
printf(" %d",f[i]);
printf("\n");
}
printf("\n\nPAGE FAULTS = %d",fs);
}
int main()
{
int n ,m,i;
printf("ENTER THE NO OF FRAME AND REFERENCE STREAM\n");
scanf ("%d%d",&n,&m);
printf ("ENTER THE REFERENCE STREAM\n");
for(i=0;i<m;i++)
scanf("%d",&rs[i]);
fifo(n,m);
return 0;}
