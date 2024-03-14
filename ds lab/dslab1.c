#include<stdio.h>
#include<stdlib.h>
struct day 
{
char *Dname; 
int date; 
char *descAct;
};
struct day * createCal (int size); 
void read(struct day *pcal,int size); 
void dispCal (struct day *pcal, int size); 
void freemem( struct day *pcal, int size); 
int main() 
{ 
int size; 
struct day *pcal; 
printf("\n Ener the no of days in calender :"); 
scanf("%d", &size); 
pcal=createCal(size); 
read(pcal, size) ; 
dispCal(pcal, size); 
freemem(pcal, size) ;
} 
struct day * createCal(int size)
{ 
struct day *pcal= (struct day*)malloc (size*sizeof(struct day)); 
if(pcal==NULL)
 {printf("Memory Allocation failed"); 
return NULL;
 } 
return pcal; 
}
void read(struct day *pcal,int size) 
{
int i; 
for(i=0;i<size; i++)
{
printf("\nEnter the details of day %d",i+1);
pcal[i].Dname=(char *) malloc(20 * sizeof (char));
printf("\nDay Name:"); 
scanf("%s", pcal[i].Dname); 
printf("\n Date:"); 
scanf("%d", &pcal[i].date);
printf("\n Activity Description:"); 
pcal[i].descAct=(char*) malloc (50*sizeof( char) ); 
scanf("%s", pcal[i].descAct); 
}
}
void dispCal(struct day *pcal,int size) 
{
 int i;
for(i=0;i<size;i++) 
{ 
printf("\n %s \t %d \t %s \t", pcal [i].Dname, pcal [i] .date, pcal[i] .descAct); 
}
}
void freemem(struct day *pcal, int size) 
{
int i; 
for(i=0;i<size;i++) 
{
free(pcal [i] .Dname);
 free(pcal [i] .descAct) ; 
}
free (pcal); 
}