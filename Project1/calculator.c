#include <stdio.h>

int main(void)
{
	float a;
	printf("How much money do you have in your pockets?: ");
	scanf("%f", &a);
	printf("The amount of money in your pocket is $%.2f", a);
	return 0;
}