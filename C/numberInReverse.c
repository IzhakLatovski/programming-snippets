#include <stdio.h>

int main() {
	int number=-1, reversedNumber=0, remainder, originalNumber;

	while(number<0) {
		printf("Please enter a number:\n");
		scanf("%d",&number);
	}
	originalNumber=number;
	while(number != 0) {
		remainder=number%10;
		reversedNumber=reversedNumber*10+remainder;
		number/=10;
	}
	printf("%d in reversed order is: %d\n",originalNumber,reversedNumber);

	return 0;
}