#include<stdio.h>
int main()
{
int n,j;
scanf("%d",&n);
for(j=n;;j++)
{
 if(j%10==0)
 {
 printf("%d",j);
 break;
 }
}
return 0;
}
