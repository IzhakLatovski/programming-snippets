#include <stdio.h>

int main() {
	int number=-1, originalNumber, reversedNumber=0, remainder;

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
	if(originalNumber == reversedNumber) {
		printf("%d is a palindrome.\n",originalNumber);
		return 1;
	}

	printf("%d is not a palindrome.\n",originalNumber);
	return 0;
}