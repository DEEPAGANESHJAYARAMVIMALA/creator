#include <stdio.h>
void main()
{
char d[200];
int count=0,i;
printf("Enter the string\n");
scanf("%[^\n]s",d);
for(i=0;d[i]!='\0';i++)
{
if(d[i]==' ')
count++;
}
printf("Number of words in given string are:%d\n",count+1);
}
