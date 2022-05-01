#include<stdio.h>
main()
{
	int n,i,sum=0;
	printf("enter n value");//6//
	scanf("%d",&n);
	for(i=1;i<n;i++)//i=1//i=2//i=3//
	{
		if(n%i==0)//6%1=0//6%2=0//6%3=0
		{
			sum=sum+i;//sum=0+1=1//sum=1+2=3//sum=3+3=6
		}
	}
	if(sum==n)//6==6
	{
		printf("perfect number");
	}
	else
	{
		printf("not perfect number");
	}
}
