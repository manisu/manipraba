#include<stdio.h>
#include<string.h>
void main()
{
int a[100],i,b,sum=0;
printf("\n Enter the string");
gets(a);
b=strlen(a);
for(i=0;i<b;i++)
{
if(a[i]==' ')
sum=sum+1;
}
printf("\n no.of spaces=%d",sum);
getch();
}
