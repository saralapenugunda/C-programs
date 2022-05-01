#include<stdio.h>
main()
{
	int n,ans;
	printf("enter n value");
	scanf("%d",&n);
	while(n!=0)
	{
		ans=n%10;
		n=n/10;
		printf("individual digits of given number  is %d\n",ans);

	}
}
