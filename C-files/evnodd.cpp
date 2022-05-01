#include<stdio.h>
main()
{
	int n;
	printf("enter n value");
	scanf("%d",&n);
	if(n%2==0)
	{
		printf("even");
	}
	else if(n==0)
	{
		printf("zero");
	}
	else
	{
		printf("odd");
	}
}
