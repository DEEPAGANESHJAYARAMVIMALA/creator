#include<stdio.h>
void main()
{
int n,i;
char s[30];
printf("enter the number");
scanf("%d",&n);
printf("enter the string");
scanf("%s",&s);
for(i=0;i<n;i++)
{
printf("%c",s[i]);
}
}
