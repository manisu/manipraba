#include<stdio.h>
#include<string.h>
void main()
{
int a[100],i,b,c,sum=0;
printf("\n Enter the string");
gets(a);
b=strlen(a);
for(i=0;i<b;i++)
{
if(0<=a[i])
sum=sum+1;
}
printf("\n no.of numericals=%d",sum);
getch();
}
