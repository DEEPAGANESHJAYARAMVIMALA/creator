#include<stdio.h>
#include<conio.h>
void main()
{
int n,r,sum=0,temp;
printf("enter the integer");
scanf("%d",&n);
temp=n;
while(n>0)
{
r=n%10;
sum=sum*10+r;
n=n/10;
}
if(temp=sum)
{
printf("isogram");
}
else
{
printf("not a isogram");
}
}
