#include <stdio.h>

int main() {
	int number;

	printf("Please enter a number:\n");
	scanf("%d",&number);

	(number%2 == 0) ? printf("%d is even.\n",number) : printf("%d is odd.\n",number);

	return 0;
}
