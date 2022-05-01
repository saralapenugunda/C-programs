#include<stdio.h>
main()
{
	 int i=1,x,y,value=1;
	 printf("enter x value");//3//
	 scanf("%d",&x);
	 printf("enter y value");//2//
	 scanf("%d",&y);
	 while(i<=y)//1<=2//2<=2
	 {
	 	value=value*x;//val=1*3=3//val=3*3=9
	 	i++;//i=1//i=2//i=3
	 }
	 printf("x^y is %d",value);//9//
	 
}
