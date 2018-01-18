#include<stdio.h>
void main()
{
int n,i;
printf("enter the number");
scanf("%d",&n);
for(i=1;i<n;i++)
{
if(i%5==0)
{
printf("%d\n",i);
}
}
}
