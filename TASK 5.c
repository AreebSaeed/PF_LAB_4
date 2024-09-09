#include<stdio.h>
int main()
{
	int id;
	float net, units, amt, surcharge;
	char name;
	printf("Enter consumer id: ");
	scanf("%d", &id);
	printf("Enter name: ");
	scanf(" %c", &name);
	printf("Enter units consumed: ");
	scanf("%f", &units);
	
	if(units<=199){
		amt=units*16.20;
	}
	else if(units>=200 && units<300)
	{
		amt=units*20.10;
	}
	else if(units>=300 && units<500){
		amt=units*27.10;
	
	}
	else if(units>=500){
		amt=units*35.90;
	}
	if(amt>18000){
		surcharge=amt+(amt*0.85);
	}
	printf("Consumer id: %d \n",id);
	printf("Consumer name: %c \n",name);
	printf("Units consumed:%f \n", units);
	printf("Amount charges: %f \n", amt);
	printf("Amount surcharge: %f \n", surcharge);
	printf("Net amount: %f \n", net=amt+surcharge);
	
	
	
	
	return 0;
}