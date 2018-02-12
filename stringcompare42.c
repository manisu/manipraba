#include<stdio.h>
#include<string.h>
void main()
{
char s1[10],s2[10];
int i;
printf("\n enter the strings");
scanf("%s",s1);
scanf("%s",s2);
for(i=0;s1[i]!='\0';i++)
{
if(s1[i]>s2[i])
{printf("\n%s is greater",s1);
break;
}
else if(s1[i]<s2[i])
{
printf("\n %s is greater",s2);
break;
}
else
{
printf("\n the strings are equal");
break;
}
}

getch();
}
