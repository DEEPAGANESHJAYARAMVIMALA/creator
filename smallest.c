#include <stdio.h>
int main()
{
	int a[10],i,j,n,temp,b;
	printf("enter the number:");
	scanf("%d",&n);
	printf("enter the elements are:\n");
	scanf("%d",&b);
	printf("list of elements:");
	for(i=0;i<n;i++)
	{
	    scanf("%d",&a[i]);
	}
	for(i=0;i<n-1;i++)
	{
	    for(j=i+1;j<n;j++)
	    {
	        if(a[i]<a[j])
	        {
	        temp=a[i];
	        a[i]=a[j];
	        a[j]=temp;
	        }
	}
	}
	printf("smallest number is:");
	printf("%d\n",a[n-1]);
	return 0;
}
