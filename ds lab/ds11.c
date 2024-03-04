#include<stdio.h>
#include<stdlib.h>
int a[10][10],n,s[10]={0};
void bfs(int u)
 {
 int f,r,q[10],v,i,s[10]={0};
 printf("The Nodes visited from %d:",u);
 f=0;r=-1; 
 q[++r]=u; 
 s[u]=1; 
 printf(" %d",u);
 while(f<=r)
 {
 u=q[f++]; 
 for(v=0;v<n;v++)
 if(a[u][v]==1) 
 if(s[v]==0) 
 {
 printf(" %d",v); 
 s[v]=1; 
 q[++r]=v; 
 }
 }
 printf("\n");
 }
void dfs(int u)
 { 
 int v;
 s[u]=1;
 printf("%d ",u);
 for(v=0;v<n;v++)
 if(a[u][v] ==1 && s[v]==0)
 dfs(v);
 }
int main()
{ 
 int u,i,j,ch;
 while(1)
 {
 printf("\n1.Create a graph");
 printf("\n2.Traversal using BFS");
 printf("\n3.Traversal using DFS");
 printf("\n4.Exit");
 printf("\nEnter your choice :");
 scanf("%d",&ch);
 switch(ch)
 {
case 1:printf("Enter the number of nodes");
scanf("%d",&n);
for(i=0;i<n;i++)
 for(j=0;j<n;j++)
{
printf("\n Enter A[%d][%d]=",i,j);
 scanf("%d",&a[i][j]);
}
break;
 case 2: printf("\n Enter the starting/source verstex ");
 scanf("%d",&u);
 bfs(u);
 break; 
 case 3: printf("\n Enter the starting/source verstex ");
 scanf("%d",&u);
 for(i=0;i<10;i++) 
 s[i]=0;
 printf("The nodes visted from %d:",u);
 dfs(u);
 break;
 case 4: _Exit(0);
 }
 }
}