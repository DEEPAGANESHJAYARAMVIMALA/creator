#include<stdio.h>
void main()
{
    int a,b,a1,c,d,c1;
    printf("enter the number:");
    scanf("%d %d",&a,&b);
    printf("%d / %d",a,b);
    printf("\nenter the number:");
    scanf("%d  %d",&c,&d);
    printf("%d % %d",c,d);
    a1=a/b;
    c1=c%d;
    printf("\n%d",a1);
    printf("\n%d",c1);
}
