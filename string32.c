#include<stdio.h>
#include<string.h>
void main()
{
int sum,array[100],i,b;
printf("\n enter the string");
gets(array);
b=strlen(array);
for(i=0;i<b;i++)
{
if(array[i]==' ')
{
sum=sum+1;
}
}
printf("\n no.of words=%d",sum);
getch();
}
