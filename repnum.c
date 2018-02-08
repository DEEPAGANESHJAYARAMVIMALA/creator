#include <stdio.h>
void main()
{
    int n,k,i,a[10],count=0;
    printf("enter the number:\n");
    scanf("%d\n%d",&n,&k);
            printf("the values are:\t");

    for(i=0;i<n;i++)
    {
    	scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
    	if(a[i]==k)
    	{
    	count++;
    	
    	}
    	printf("%d",count);
    
    }
	}

