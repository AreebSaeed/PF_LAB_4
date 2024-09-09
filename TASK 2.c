#include<stdio.h>
int main()
{
	float n1, n2;
	char operator;
	printf("Enter first number: ");
	scanf("%f", &n1);
	printf("Enter second number: ");
	scanf("%f", &n2);
	printf("Enter operator( + or - or * or / ): ");
	scanf(" %c", &operator);
	switch(operator)
	{
		case'+':
			printf("%.1f", n1+n2);
			break;
		case'-':
			printf("%.1f", n1-n2);
			break;	
		case'*':
			printf("%.1f", n1*n2);
			break;
		case'/':
			printf("%.1f", n1/n2);
			break;
	}
	
	
}