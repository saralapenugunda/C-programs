#include<stdio.h>
main()
{
	int n,count=0,temp;
	printf("enter a number\n");//789//
	scanf("%d",&n);
	temp=n;//temp=789//temp=70//temp=7//temp=0
	while(n!=0)//789!=0//70!=0//7!=0
	{
		n=n/10;//789/10=70//70/10=7//7/10=0
		count++;//1//2//3
	}
	printf("there are %d digits in number %d",count,temp);//3digits
}
