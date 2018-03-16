#include <stdio.h>
#include<string.h>
int main()
{
    char n[10];
   int a,i=0,l=0,k=0;
printf("enter the string");
scanf("%s",&n);
printf("enter N value");
scanf("%d",&a);
l=strlen(n);

for(i=--l;a>0;i--,a--)
{
    printf("%c\t",n[i]);
}

    return 0;
}
