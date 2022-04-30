#include<stdio.h>
main()
{
	int a;
	float area;
	printf("enter a value");
	scanf("%d",&a);
	//surface area of cube
	area=6*a*a;
	printf("surfacearea of cube is %f",area);
	
	//surface area of sphere
	area=4*3.14*a*a;
	printf("surfacearea of sphere is %f",area);
	
}
