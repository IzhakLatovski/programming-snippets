#include <stdio.h>

int main() {
	int number=-1, currentDigit=0, nextDigit=10, originalNumber;

	while(number<0) {
		printf("Please enter a number:\n");
		scanf("%d",&number);
	}
	originalNumber=number;
	while(number != 0) {
		currentDigit=number%10;
		if(currentDigit>nextDigit) {
			printf("%d's digits are not in ascending order\n",originalNumber);
			return 0;
		}
		nextDigit=currentDigit;
		number/=10;
	}
	printf("%d's digits are in ascending order\n",originalNumber);

	return 1;
}