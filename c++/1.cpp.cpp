#include<stdio.h>
int main()
{
FILE *fp;
fp=fopen("demo.txt","r");
int pos;
fseek(fp, 2 ,SEEK_SET);
pos=ftell(fp);
printf("pos=%d",pos);
char a;
a=fgetc(fp);
printf("char=%c",a);
}
