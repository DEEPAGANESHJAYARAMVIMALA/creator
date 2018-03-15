#include<stdio.h>
int main()
{
    int n0,n1;
    scanf("%d%d",&n0,&n1);
    while(n0!=n1)
    {
        if(n0>n1)
        {
            n0=n1;
            
        }
        else
        {
            n1=n0;
        }
        printf("gcd %d",n0);
    }
    return 0;
}
