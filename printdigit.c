#include<stdio.h>
#include<string.h>
int main()
{
  char a[30];
  int l,i;
  printf("Enter the string:");
  scanf("%s",&a);
  l=strlen(a);
  for(i=0;i<=l;i++)
  {
    if(a[i]>=48 && a[i]<=57)
    {
      printf("%c",a[i]);
    }
  }
return 0;
}
