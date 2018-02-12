#include<stdio.h>
void main()
{
int i,a[10],n,sum;
float avg;
printf("\n enter the number");
scanf("%d",&n);
printf("\n enter the numbers");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
sum=sum+a[i];
}
avg=sum/n;
printf("\n average=:%f",avg);
getch();
}

