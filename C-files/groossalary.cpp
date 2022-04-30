#include<stdio.h>
main()
{
	float basicsalary,da,hra,pf,grossalary;
	printf("enter basicsalary\n");
	scanf("%f",&basicsalary);
	printf("eneter hra\n");
	scanf("%f",&hra);
	da=(10*basicsalary)/100;
	printf("da=%f\n",da);
	pf=(basicsalary*12)/100;
	printf("pf=%f\n",pf);
	grossalary=basicsalary+da+hra+pf;
	printf("grossalary is %f\n",grossalary);
}
