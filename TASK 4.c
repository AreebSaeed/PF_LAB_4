#include<stdio.h>
int main()
{
	float cost=0.0, finalcost = 0.0, discount=0.0;
	printf("enter the cost: ");
	scanf("%f", &cost);
	if(cost>=500 && cost<2000){
		finalcost=(cost*0.95);
		discount=cost*0.05;
		printf("Actual amount= %.2f\n",cost);
		printf("Saved amount= %.2f \n", cost-discount);
		printf("Discount= %.2f\n", discount);
	}
	else if (cost>=2000 && cost<4000 ) {
		finalcost=(cost*0.90);
		discount=cost*0.1;
		printf("Actual amount= %.2f\n",cost);
		printf("Saved amount= %.2f\n", cost-discount);
		printf("Discount= %.2f\n", discount);
	}

	else if (cost>=4000 && cost<6000 ) {
		finalcost=(cost*0.80);
		discount=cost*0.2;
		printf("Actual amount= %.2f\n",cost);
		printf("Saved amount= %.2f\n", cost-discount);
		printf("Discount= %.2f\n", discount);
	}
	else if (cost>=6000 ) {
		finalcost=(cost*0.65);
		discount=cost*0.35;
		printf("Actual amount= %.2f\n",cost);
		printf("Saved amount= %.2f\n", cost-discount);
		printf("Discount= %.2f\n", discount);
	}
	
	
	return 0;
}