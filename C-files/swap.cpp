#include<stdio.h>
main()
{
	int a,b;
	printf("eneter two numbers");
	scanf("%d%d",&a,&b);
	printf("before swapping is %d %d\n",a,b);
	a=a+b;
	b=a-b;
	a=a-b; 
	printf("after swapping is %d%d\n",a,b);
	int c,d;
	printf("enter two numbers");
	scanf("%d %d",&c,&d);
	printf("before swapping is %d %d\n",c,d);
	int temp;
	temp=c;
	c=d;
	d=temp;
	printf("after swapping is %d%d\n",c,d);
	
	
}
