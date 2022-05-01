#include<stdio.h>
main()
{
	int a,b,c;
	printf("enter a,b,c values");
	scanf("%d %d",&a,&b,&c);
	//greatest of 3//
	if(a>b)
	{
		if(a>c)
		printf("%d is greatest\n",a);
		else
		printf("%d is greatest\n",c);
	}
	else 
	{
		if(b>c)
		printf("%d is greatest\n",b);
		else
		printf("%d is greatest\n",c);
		
	}
	
}
