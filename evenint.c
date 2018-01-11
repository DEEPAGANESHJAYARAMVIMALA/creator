#include<stdio.h>
#include<conio.h>
void main()
{
int f1,f2,rem,i;
printf("first number range");
scanf("%d",&f1);
printf("second number range");
scanf("%d",&f2);
for(i=f1;i<=f2;i++)
{
if(i/2==0)
{
printf("%d",i);
}
}
}
