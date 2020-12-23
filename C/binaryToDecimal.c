#include <stdio.h>

int main() {
	int i=0, result=0;
	char string1[100];

	printf("Please enter binary string:\n");
	scanf("%s",string1);
	
	while(string1[i] != '\0') {
		if(string1[i]<'0' || string1[i]>'1') {
			printf("Wrong input!");
			return 1;
		}
		result=(string1[i]-'0'+result*2);
		i++;
	}
	printf("%d",result);

	return result; 
}
