#include<stdio.h>
void main()
{
    int a[10],sum=0,i,n;
    
    printf("enter the number");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter the elements are");
    for(i=0;i<n;i++)
    {
    sum=sum+a[i];
    }
    printf("%d",sum);
    
}
