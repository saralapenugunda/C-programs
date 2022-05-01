#include<stdio.h>
main()
{
	int a,b;
	printf("enter a,b values");
	scanf("%d %d",&a,&b);
	if(a>b)
	{
		printf("%d is greatest\n",a);
	}
	else 
	{
		printf("%d is greatest\n",b);
	}
	if(a<b)
	{
		printf("%d is smallest\n",a);
		
	}
	else
	{
		printf("%d is smallest=\n",b);
	}
}
