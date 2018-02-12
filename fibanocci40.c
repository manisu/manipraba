#include<stdio.h>
void main()
{
int n,a=0,b=1,c,count;
printf("\n Enter the series limit");
scanf("%d",&n);
printf("\n Fibanocci series");
printf("\n%d",a);
printf("\n%d",b);
count=1;
while(count!=n)
{
c=a+b;
printf("\n%d",c);
a=b;
b=c;
count++;
}
getch();
}
