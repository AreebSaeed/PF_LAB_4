#include<stdio.h>
int main()
{
	int N;
	printf("ENTER THE NUMBER: ");
	scanf("%d", &N);
	if (N%3==0) {
		printf("The number is multiple of 3");
		
	}	
	else { printf("The number is not a multiple of 3");
	}
	
	return 0;
}