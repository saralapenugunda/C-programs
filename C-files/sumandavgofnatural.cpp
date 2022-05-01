#include<stdio.h>
main()
{
	int n,i=1,sum=0;
	printf("enter n value\n");//5//
	scanf("%d",&n);
	while(i<=n)//1<=5//2<==5//3<==5//4<=5//5<=5
	{
		sum=sum+i;//sum=0+1=1//sum=1+2=3//sum=3+3=6//sum=6+4=10//sum=10+5=15
		i++;
		
	}
	printf("sum of given numbers is %d\n",sum);
	float avg=sum/n;//15/5=3//
	printf("average is %f\n",avg);
	
}
	
