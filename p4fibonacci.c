#include<stdio.h>
int main()
{
	int i, f0=0, f1=1, fib, n;
	printf("Enter n: ");
	scanf("%d",&n);
	printf("%d %d ", f0,f1);
	
	for(i=2;i<n;i++)
	{
		fib=f0+f1;
		printf("%d ",fib);
		f0=f1;
		f1=fib;	
	}
}
