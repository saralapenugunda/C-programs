#include<stdio.h>
main()
{
	int f,c;
	float result;
	printf("enter fahrenheit");
	scanf("%d",&f);
	result=(f-32)*5/9;
	printf("result =%f\n",result);
	printf("enter celsius");
	scanf("%d",&c);
	result=c*9/5+32;
	printf("result=%f\n",result);
}
