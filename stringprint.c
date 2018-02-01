#include<stdio.h>
int main()
{
char b[10];
int t,i;
printf("enter the string:\n");
scanf("%s",&b);
printf("enter the number:\n");
scanf("%d",&t);
for(i=1;i<=t;i++)
{
printf("%s\n",b);
}
return 0;
}
