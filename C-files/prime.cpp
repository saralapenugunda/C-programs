#include<stdio.h>
main()
{
	int i,n,flag=0;
	printf("enter n value");//7//4//
	scanf("%d",&n);
	for(i=2;i<n/2;i++)//i<7/2=3//i<4/2=2
	{
		if(n%i==0)//7%2=3//6%2==0
		{
			printf("not a prime number-compistenumber");//4//
			flag=1;
			break;
		}
	}
	if(flag==0)
	{
		printf("prime number");//7//
	}
}
