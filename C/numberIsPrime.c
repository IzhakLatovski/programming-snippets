#include <stdio.h>

int main() {
	int number=-1, i=2;

	while(number<=0) {
		printf("Please enter a number:\n");
		scanf("%d",&number);
	}
	if(number==1) {
		printf("%d is special, not prime and not not prime.\n",number);
		return 0;
	}
	for(i ; i<=(number/2) ; i++) {
		if(number%i == 0) {
			printf("%d is not a prime number.\n",number);
			return 0;
		}
	}
	printf("%d is a prime number.\n",number);

	return 1;
}