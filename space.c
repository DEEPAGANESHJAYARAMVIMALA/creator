#include <stdio.h>
void main()
{
char c[200];
int space=0,i;
printf("Enter the string\n");
scanf("%[^\n]s",c);
for(i=0;c[i]!='\0';i++)
{
if(c[i]==' ')
space++;
}
printf("Number of space in given string are:%d\n",space);
}
