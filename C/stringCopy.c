#include <stdio.h>

int main() {
	int i=0;
	char string1[100], string2[100];

	printf("Please enter string:\n");
	scanf("%s",string1);
	
	while(string1[i] != '\0') {
		string2[i]=string1[i];
		i++;
	}
	string2[i]='\0';

	return 0;
}

