#include <stdio.h>
void main()
{
char c[200];
int count=0,i;
printf("Enter the string\n");
scanf("%[^\n]s",c);
for(i=0;c[i]!='\0';i++)
{
if(c[i]==' ')
count++;
}
printf("Number of words in given string are:%d\n",count+1);
}
