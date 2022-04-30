#include<stdio.h>
main()
{
	int n,h,b,r,s;
	float vol;
	printf("enter n value");
	scanf("%d",&n);
	switch(n){
	case 1:
	//volume of triangle
	printf("volume of triangle\n");
	printf("enter side and height\n");
	scanf("%d %d",&s,&h);
	vol=s*h;
	printf("volume of triangle is %f\n",vol);
	break;
	case 2:
	//volume of rectangle
	printf("volume of rectangle\n");
	printf("enter  length,side and height\n");
	scanf("%d %d",&s,&h,&b);
	vol=s*b*h;
	printf("volume of triangle is %f\n",vol);
	break;
	case 3:
	//volume of square
	printf("volume of square\n");
	printf("enter side\n");
	scanf("%d ",&s);
	vol=s*s*s;
	printf("volume of square is %f\n",vol);
	break;
	case 4:
	//volume of sphere
	printf("volume of sphere\n");
	printf("enter radius\n");
	scanf("%d",&r);
	vol=4/3*3.14*r*r*r;
	printf("volume of sphere is %f\n",vol);
	break;
	case 5:
	//volume of cone
	printf("volume of cone\n");
	printf("enter radius and height\n");
	scanf("%d %d",&r,&h);
	vol=1/3*3.14*r*r*h;
	printf("volume of cone is %f\n",vol);
	break;
	case 6:
	//volume of cylinder
	printf("volume of cylinder\n");
	printf("enter radius and height\n");
	scanf("%d %d",&r,&h);
	vol=3.14*r*r*h;
	printf("volume of cylinder is %f\n",vol);
	break;
	case 7:
	//volume of pyramid
	printf("volume of pyramid\n");
	printf("enter base  and height\n");
	scanf("%d %d",&b,&h);
	vol=1/3*b*h;
	printf("volume of pyramid is %f\n",vol);
	break;
	default:printf("please eneter valid n value");
   }
	
}
