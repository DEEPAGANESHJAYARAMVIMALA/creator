#include<stdio.h>
void main()
{
int n,h,m;
printf("enter the number");
scanf("%d",&n);
if(n<60)
{
printf("0 \t %d",n);
}
if(n>60)
{
h=n/60;
m=n%60;
printf("%d \t %d,h,m);
}
return 0;
}
