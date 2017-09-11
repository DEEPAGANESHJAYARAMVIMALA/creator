#include<stdio.h>
#include<conio.h>
void reverse(char [], int, int);
int main()
{
    char str[20];
    int size;
 
    printf("Enter a string to reverse: ");
    scanf("%s", str);
    size = strlen(str);
    reverse(str1, 0, size - 1);
    printf("The string after reversing is: %s\n", str1);
    return 0;
}
 
void reverse(char str[], int index, int size)
{
    char temp;
    temp = str[index];
    str1[index] = str1[size - index];
    str[size - index] = temp;
    if (index == size / 2)
    {
        return;
    }
    reverse(str, index + 1, size);
