#include<stdio.h>
main()
{
	int n,i ,range;
	printf("enter an integer");
	scanf("%d",&n);
	printf("eneter range");
	scanf("%d",&range);
	for(i=1;i<=range;i++)
	{
		printf("%d*%d =%d\n",n,i,n*i);
	}
}
