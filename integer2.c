#include <stdio.h>

int main(void) {
	int j=0,n,count=0,a[100];
	printf("enter the number");
	scanf("%d",&n);
	while(n!=0)
	{
		a[j]=n%10;
		j++;
		n=n/10;
		count++;
	}
	for(j=count-1;j>=0;j--)
	printf("%d",a[j]);
	return 0;
}
