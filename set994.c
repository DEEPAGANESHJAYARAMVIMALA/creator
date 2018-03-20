#include <stdio.h>
void main()
{
    int n,k,a[10],i;
    printf("enter the elements and position of element:");
    scanf("%d%d",&n,&k);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("%d",a[k-1]);
    
}
