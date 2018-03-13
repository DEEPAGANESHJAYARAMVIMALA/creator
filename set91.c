#include<stdio.h>
void main()
{
    int a[10],b[10],i,n;
    scanf("%d",&n);
    printf("enter the number");
    for(i=0;i<n;i++)
    {
        scanf("%d%d",&a[i],&b[i]);
    }
    printf("difference of two numbers");
    for(i=0;i<n;i++)
    {
        printf("\n%d",(b[i]-a[i]));
    }
}
