#include<stdio.h>
int main()
{
	int n,a[50],j,i,k;
	printf("enter the size of array");
	scanf("%d",&n);
	printf("enter the array elements");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		
	}
	printf("the array elements are\n");
	
	for(i=0;i<n;i++)
	{
			printf("a[%d]=%d\n",i,a[i]);
	}
	printf("enter a element to delete");
    scanf("%d",&k);
    for(i=0;i<n;i++)
    {
    	if(k==a[i])
    	printf("the index a[%d]\n",i);
    	for(j=i;j<n;j++)
    	{
    			a[j]=a[j+1];
    			printf("%d", j);
    			
		}
	}
		for(i=0;i<n-1;i++)
		{
			printf("a[%d]=%d\n",i,a[i]);
		}
		
	}
