#include<stdio.h>
int main()
{
int c,d,min,l;
scanf("%d%d",&c,&d);
min=(c<d)?c:d;
for(min=2; min <= c && min <= d; min++)
{
if((c%min==0)&&(d%min==0))
{
  break;
}
}
l=(c*d)/min;
printf("LCM of given number is = %d",l);
return 0;
}

