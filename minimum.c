#include<stdio.h>
void main()
{
    int a[10],n,min,i;
    printf("enter the number");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        if(a[i]<min)
        {
            min=a[i];
            printf("%d",min);
        }
    }
}
