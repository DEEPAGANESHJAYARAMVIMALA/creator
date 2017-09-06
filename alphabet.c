#include <stdio.h>
 
int main()
{
  char c;
  printf("\n Please Enter any character \n");
  scanf("%c", &c);
  
  if( (ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') )
    printf("\n %c is an Alphabet", ch);
  else
    printf("\n %c is not an Alphabet", ch);
  
  return 0;
}
