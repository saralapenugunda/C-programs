#include<stdio.h>
main()
{
	int a,b,c,d;
	printf("eneter a,b,c values:");
	scanf("%d %d %d",&a,&b,&c);
	d=b*b-4*a*c;
	if(d>0)
	{
		printf("roots are real and distinct");
	}
	else if(d==0)
	{
		printf("roots are real and equal");
	}
	else
	{ 
	 printf("roots are imiginary");
	}
	
}
