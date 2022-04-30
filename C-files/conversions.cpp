#include<stdio.h>
main()
{
	int a,n;
	float result; 
	printf("enter n value");
	scanf("%d",&n);
	switch(n){
	case 1:
	//meters to feet//
	printf("enter meters\n");
	scanf("%d",&a);
	result=3.281*a;
	printf("feets = %f\n",result);
	break;
	case 2:
	//inch//
	printf("enter meters\n");
	scanf("%d",&a);
	result=39.37*a;
	printf("inch = %f\n",result);
	break;
	case 3:
	//feet to meters//
	printf("enter feet\n");
	scanf("%d",&a);
	result=a/3.281;
	printf("meters = %f\n",result);
	break;
	case 4:
	//centimeters//
	printf("enter feet\n");
	scanf("%d",&a);
	result=30.48*a;
	printf("centimeters = %f\n",result);
	break;
	case 5:
	//km//
	printf("enter feet\n");
	scanf("%d",&a);
	result=a/3281;
	printf("kilometers = %f\n",result);
	break;
    case 6:
	//millimeter//
	printf("enter feet\n");
	scanf("%d",&a);
	result=305*a;
	printf("millimeter = %f\n",result);
	break;
	case 7:
	//feet to micrometer//
	printf("enter feet\n");
	scanf("%d",&a);
	result=304800*a;
	printf("micrometers = %f",result);
	break;
	case 8:
	//foot toyard//
	printf("enter feet");
	scanf("%d",&a);
	result=a/3;
	printf("centimeters = %f\n",result);
	break;
	case 9:
	// foot to inch//
	printf("enter feet\n");
	scanf("%d",&a);
	result=12*a;
	printf("inchs = %f\n",result);
	break;
	case 10:
	//kilometers to miles
	printf("enter kilometers\n");
	scanf("%d",&a);
	result=a/1.609;
	printf("miles = %f\n",result);
	break;
	case 11:
	//yard to foot//
	printf("enter yard");
	scanf("%d",&a);
	result=3*a;
	printf("feet = %f\n",result);
	break;
	case 12:
	//inch to cm//
	printf("enter inch\n");
	scanf("%d",&a);
	result=2.54*a;
	printf("centimeters = %f\n",result);
	break;
	case 13:
	//kb to mb//
	printf("enter kilobytes\n");
	scanf("%d",&a);
	result=a/1000;
	printf("meagabytes = %f\n",result);
	break;
	case 14:
	//gb to mb//
	printf("enter gigabytes\n");
	scanf("%d",&a);
	result=1000*a;
	printf("megabytes = %f\n",result);
	break;
	case 15:
	//mb to kb//
	printf("enter megabytes\n");
	scanf("%d",&a);
	result=1000*a;
	printf("kilobytes = %f\n",result);
	break;
	case 16:
	//kg to lb//
	printf("enter kilograms\n");
	scanf("%d",&a);
	result=2.205*a;
	printf("pound = %f\n",result);
	break;
	case 17:
	//kg to ounce//
	printf("enter kilogram\n");
	scanf("%d",&a);
	result=35.274*a;
	printf("ounce = %f\n",result);
	break;
	default:printf("please eneter valid n value");
  }
}
