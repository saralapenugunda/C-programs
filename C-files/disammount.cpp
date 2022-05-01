#include<stdio.h>
main()
{
	float price;
	float discountpercent;
	float discountamount;
	printf("enter price");
	scanf("%f",&price);
	printf("enter discountpercentage");
	scanf("%f",&discountpercent);
	discountamount=(discountpercent*price)/100;
	printf("discountamount is %f",discountamount);
}
