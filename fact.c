#include <stdio.h>
void main()
{
    int n, i;
    long long factorial = 1;

    printf("Enter an integer");
    scanf("%d",&n);
    if (n < 0)
        printf("Factorial of a negative number");

    else
    {
        for(i=1; i<=n; i++)
        {
            factorial *= i;             
        }
        printf("Factorial of %d",factorial);
    }
}
