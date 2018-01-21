#include <stdio.h>
void main()
{
int a,b,t;
printf("enter the number");
scanf("%d %d",&a,&b);
t=a;
a=b;
b=t;
printf("%d %d",a,b);
}
