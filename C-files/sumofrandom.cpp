#include<stdio.h>
main()
{
	int n,m,i=1,sum=0;
	printf("enter n value\n");//3//
	scanf("%d",&n);
	while(i<=n)//1<=3//2<=3//3<=3//
	{
		printf("enter random numbers");//8//7//6//
		scanf("%d",&m);
		sum=sum+m;//sum=0+8=8//sum=8+7=15//sum=15+6=21//
		i++;//i=2//i=3//i=4//
    }
    printf("sum is %d",sum);//sum=21//
		
}
