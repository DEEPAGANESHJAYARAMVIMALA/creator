#include<stdio.h>
int main()
{
int n,x=0,c=1,p=2,i;
scanf("%d",&n);
while(n!=1)
{
n=n/2;
x++;
}
for(i=0;i<x+1;i++)
{
c=c*p;
}
printf("The nearest greater power of 2 is:%d",c);
return 0;
}
