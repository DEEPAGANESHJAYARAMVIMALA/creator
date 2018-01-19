#include<stdio.h>
void main()
{
int a[10],i,n;
printf("enter the number");
scanf("%d",n);
for(i=0;i<n;i++)
{
printf("%d",a[i]);
}
for(i=0;i<n;i++)
{
printf("%d%d",a[i],i);
}
}
