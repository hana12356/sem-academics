#include <stdio.h>
#include <stdlib.h>
int a[10][10],t[10][10],n;

void path()
{
int i,j,k;
for(k=0;k<n;k++) {
for(i=0;i<n;i++) {
for(j=0;j<n;j++) {
if((t[i][j]) || (t[i][k] && t[k][j])) t[i][j]=1;
            }
        }
    }
}
void main()
{
int i,j;
printf("\n Enter n of vertices :");
scanf("%d",&n);
printf("\n Enter the adjacent matrix:\n");
for(i=0;i<n;i++)
for(j=0;j<n;j++) {
scanf("%d" ,&a[i][j]);
t[i][j]=a[i][j];
    }
path();
printf("\n The transitive clouser matrix is:\n");
for(i=0;i<n;i++)
    {
for(j=0;j<n;j++)
        {
printf("%5d",t[i][j]);
        }
printf("\n");
    }
}


output:
enter n of vertices:4
enter the adjacent matrix:
0 5 8 9
99 0 3 4
99 99 0 1
99 99 99 0
the transitive clouser matrix is:
1 1 1 1
1 1 1 1
1 1 1 1
1 1 1 1
