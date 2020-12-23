#include <stdio.h>

int main() {
	int number=-1, i=1, remainder, sum=0;

	while(number<0) {
		printf("Please enter a number:\n");
		scanf("%d",&number);
	}
	for(i ; i<=number-1 ; i++) {
		remainder=number%i;
		if(remainder==0) {
			sum+=i;
		}
	}
	if(number == sum) {
		printf("%d is a perfect number.\n",number);
		return 1;
	}
	printf("%d is not a perfect number.\n",number);

	return 0;
}