#include <stdio.h>

int main(void)
{
	float a;
	printf("How much money do you have in your pockets?: ");
	scanf("%f", &a);
	printf("$%f", a);
	return 0;
}