#include<stdio.h>
int main()
{
	int age;
	char name;
	printf("Enter your name: ");
	scanf("%s", &name);
	printf("Enter your age: ");
	scanf("%d", &age);
	if(age>=18){ printf("You are eligible for liscense");
	
	}
	else {
		printf("You are not eligible for liscense");
	}
	return 0;
}