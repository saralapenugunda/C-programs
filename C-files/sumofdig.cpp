#include<stdio.h>
main()
{
	int n,sum=0;
	printf("enter n value");//89
	scanf("%d",&n);
	while(n!=0)//89!=0//8!=0//
	{
		sum+=n%10;//sum=0+89%10=9//sum=9+8%10=17
		n=n/10;//89/10=8//n=8/10=0//
	}
	printf("sum of digits of given n is %d\n",sum);
}
