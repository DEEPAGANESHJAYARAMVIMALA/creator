
#include <stdio.h>
void main()
{
    int n,count=1,i;
    printf("enter the number:");
    scanf("%d",&n);
    for(i=1;i<n;i++)
    {
        n=n/10;
        ++count;
           
    }
     printf("the count string is :%d",count);      
}



