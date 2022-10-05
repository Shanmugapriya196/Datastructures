#include<stdio.h>
int main()
{
	int n;
	printf("Enter the number: ");
	scanf("%d",&n);
	if(n%2 == 0)
	{
		printf("The given number is Even");
	}
	else
	{
		printf("The given number is Odd");
	}
}
