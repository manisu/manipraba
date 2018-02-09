#include<stdio.h>
void main()
{
int a,b,temp;
printf("\n enter the numbers");
scanf("%d%d",&a,&b);
printf("\n before swapping=%d%d",a,b);
temp=a;
a=b;
b=temp;
ptintf("\n after swapping=%d%d",a,b);
getch();
}
