#include<stdio.h>
void main() {
    char a[15];
    printf("Enter an string:");
    scanf("%s",&a);
    int i,count=0;
    for(i=0;i<15;i++)
    {if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u'||a[i]=='A'||a[i]=='E'||a[i]=='I'||a[i]=='O'||a[i]=='U')
    {
    count++;
     }
    }
     if(count!=0)
     printf("Yes");
     else
     printf("No");
}