#include <stdio.h>
void main()
{
    char a[50];
    int count=0;
    int i;
    int NULL=0;
    printf("enter the string");
    scanf("%s",&a)
    for(i=0;a[i]!=='\0';i++)
    {
        if((a[i]=='&')||(a[i]=='*')||(a[i]=='@'))
        {
            count++;
           
        }
         printf("count the number of  special characters:%d",count);
    }
}

