#include<stdio.h>
void main()
{
int a[20],t,i,j;
printf("enter the number");
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
for(j=0;j<n-1;j++)
{
t=a[i];
a[i]=a[j];
a[j]=t;
}
}
}
printf("the sorted array is "):
for(i=0;i<n;i++)
{
printf("%d",a[i]);
}
}
