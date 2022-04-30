#include<stdio.h>
int main()
{
	char fname[20],mname[20],lname[20];
	printf("enter full name in this format (first middle last)");
	scanf("%s %s %s",&fname,&mname,&lname);
	printf("abbreviated name is %c.%c. %s\n",fname[0],mname[0],lname);
}
