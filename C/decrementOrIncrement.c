#include <stdio.h>

int decrementOrIncrement(int number) {
	if(number%4==0) {
		number++;
	} else {
		number--;
	}
	printf("%d\n",number);

	return number;
}

int main() {
	decrementOrIncrement(23);

	return 0;
}