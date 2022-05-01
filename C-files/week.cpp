#include<stdio.h>
main()
{
	int n;
	printf("enter value");
	scanf("%d",&n);
	switch(n){
		case 1:
			printf("monday");
			break;
		case 2:
			printf("Tuesday");
			break;
		case 3:
			printf("wednesday");
			break;
		case 4:
			printf("thursday");
			break;
		case 5:
			printf("Friday");
			break;
		case 6:
			printf("saturday");
			break;
		default:printf("enter valid value");
	}
	
}
