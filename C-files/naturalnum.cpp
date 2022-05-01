#include<stdio.h>
main()
{
	int n,i;
	printf("enter n value");
	scanf("%d",&n);
	printf("1 to %d natural numbers are \n",n);
	for(i=1;i<=n;i++)
	{
		printf(" %d ", i);
	}
	
}
