#include<stdio.h>
main()
{
	 int i=1,x,y,sum=0;
	 printf("enter x value");//4//
	 scanf("%d",&x);
	 printf("enter y value");//4//
	 scanf("%d",&y);
	 while(i<=y)//1<=4//2<=4//3<=4//4<=4
	 {
	 	sum=sum+x;//sum=0+4=4//sum=4+4=8//sum=8+4=12//sum=12+4=16
	 	i++;//i=2//i=3//i=4//i=5
     }
     printf("\n x*y is %d",sum);//16//
}
