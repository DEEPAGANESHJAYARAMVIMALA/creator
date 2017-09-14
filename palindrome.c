#include<stdio.h>
void main()
{
into n,ori;
clrscr();
printf(” \n Enter any four digit integer no.:”);
scanf(“%d”, & n);
ori= n;
n=n%10*1000+n/10%10*100+n/10%10*10+n/1000;
if(ori==n)
{
printf(“\n no. Is palindrome”);
}
else
{
printf(“\n no. Is not palindrome”);
}
getch();
}
