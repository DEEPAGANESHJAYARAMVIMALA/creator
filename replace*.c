#include<stdio.h>
#include<string.h>
void main()
{
  char str[50];
  int a,d;
  printf("Enter the string:");
  gets(str);
  a=strlen(str);
  if(a%2==0)
  {
    d=a/2;
    str[d]='*';
    str[d-1]='*';
    puts(str);
     }
      else
     {
       d=a/2;
       str[d]='*';
        puts(str);
     }
    
}
