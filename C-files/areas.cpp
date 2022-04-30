#include<stdio.h>
#include<math.h>
main()
{
	int n,b,h,r,s;
	float area;
	printf("enter n value");
	scanf("%d",&n);
	switch(n){
	case1:
	//area of circle
	printf("area of circle\n");
	printf("eneter radius\n");
	scanf("%d",&r);
	area=3.14*r*r;
	printf("area of circle is %f\n",area);
	break;
	case 2:
	//area of triangle
	printf("area of triangle\n");
	printf("enter base and height\n");
	scanf("%d %d",&b,&h);
	area=0.5*b*h;
	printf("area of triangle is %f\n",area);
	break;
	case 3:
	//area of rectangle
	printf("area of rectangle\n");
	printf("enter base and height\n");
	scanf("%d %d",&b,&h);
	area=b*h;
	printf("area of rectangle is %d\n",area);
	break;
	case 4:
	//area of cylinder
	printf("area of cylinder\n");
	printf("eneter radius and height \n");
	scanf("%d %d",&r,&h);
	area=2*3.14*r*h+2*3.14*r*r;
	printf("area of cylinder is %f\n",area);
	break;
	case 5:
	//area of rhombus
	printf("area of rhombus\n");
	printf("enter base and height\n");
	scanf("%d %d",&b,&h);
	area=b*h/2;
	printf("area of rhombus is %f\n",area);
	break;
	case 6:
	//area of sphere
	printf("area of sphere\n");
	printf("eneter radius\n");
	scanf("%d",&r);
	area=4*r*r;
	printf("area of sphere is %f\n",area);
	break;
	case 7:
	//area of square
	printf("area of square\n");
	printf("eneter side\n");
	scanf("%d",&s);
	area=s*s;
	printf("area of circle is %f\n",area); 
	break;
	case 8:
	//area of parallelogram
	printf("area of parallelogram\n");
    printf("enter base and height\n");
	scanf("%d %d",&b,&h);
	area=b*h;
	printf("area of triangle is %f\n",area);
	break;
	case 9:
	//area of equilateral traingle
	printf("area of equilateral triangle\n");
	printf("eneter side\n");
	scanf("%d",&s);
	area=  sqrt(3)/4*s*s;
	printf("area of equilateral is %f\n",area);
	break;
	default:printf("please eneter valid n value");
}
	
}
