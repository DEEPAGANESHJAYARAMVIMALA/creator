#include <stdio.h>
int main()
{
    int n, reversedNumber = 0, remr;

    printf("Enter an integer: ");
    scanf("%d", &n);

    while(n != 0)
    {
        rem = n%10;
        reversedNum = reversedNum*10 + rem;
        n /= 10;
    }

    printf("Reversed Number = %d", reversedNum);

    return 0;
}
