#include<stdio.h>
void main()
{
int a[100],i,n,max;
printf("\n enter the size");
scanf("%d",&n);
printf("\n enter the elements of the array");
for(i=0;i<n;i++)
{
scanf("%d\t",&a[i]); 
}
max=a[0];
for(i=0;i<n;i++)
{
if(a[i]>max)
{
max=a[i];
}
}
printf("\n largest number+%d",max);
getch();
}

