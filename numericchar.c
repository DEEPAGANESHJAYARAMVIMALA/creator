#include <stdio.h>
void main()
{
char c[200];
int count=0,i;
printf("Enter the paragraph\n");
scanf("%[^\n]s",c);
for(i=0;c[i]!='\0';i++)
{
if((c[i]=='0')||(c[1]==1)||(c[i]=='2')||(c[i]=='3')||(c[i]=='4')||(c[i]=='5')||(c[i]=='6')||(c[i]=='7')||(c[i]=='7')||
(c[i]=='8')||(c[i]=='9'))
count++;
}
printf("Number of lines in given paragraph are:%d\n",count+1);
}
