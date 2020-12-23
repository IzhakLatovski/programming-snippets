#include <stdio.h>

void sumOrDifference(int num1, int num2) {
	if(num1>num2) {
		printf("%d\n",num1-num2);
	} else {
		printf("%d\n",num1+num2);
	}

	return;
}

int main() {
	sumOrDifference(17,28);

	return 0;
}