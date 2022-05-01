#include<stdio.h>
main()
{
	float s1,s2,s3,s4,s5;
	float avg,per;
	printf("enter marks of five subjects:\n");
	scanf("%f %f %f %f %f",&s1,&s2,&s3,&s4,&s5);
	int total=s1+s2+s3+s4+s5;
	printf("total marks=%d\n",total);
	avg=total/5.0;
	printf("average marks=%.1f\n",avg);
	per=(total/500.0)*100;
    printf("percentage =%.1f\n",per);
}	
