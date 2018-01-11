#include <stdio.h>
#include<conio.h>
void main()
{
int t,n,r,result=0;
clrscr();
printf("enter the number");
scanf("%d",&n);
t=n;
while(t!=0)
{
    t=n%10;
    result=result+(r*r*r);
    n=n/10;
}
if(t==result)
{
printf("amstrong number");
}
else
{
printf("not a amstrong number");
}
getch();
}




