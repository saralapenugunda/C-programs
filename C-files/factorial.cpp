#include<stdio.h>
main()
{
	int n,i;
	long int fact=1 ;
	printf("enter n value");//n=3//
	scanf("%d",&n);
	for(i=1;i<=n;i++)//i=2,2<3//i=3,3<=3//i=4,4<3 breaks//
	{
		fact=fact*i;//fact=1*1=1//fact=1*2=2//fact=2*3=6//
	}
	printf("factorial of given number %d is %ld",n,fact);
}
