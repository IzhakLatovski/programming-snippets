#include <stdio.h>

int main() {
	int i=0;
	char string1[100], string2[100];

	printf("Please enter first string:\n");
	scanf("%s",string1);
	printf("Please enter second string:\n");
	scanf("%s",string2);
	
	while((string1[i] == string2[i]) && (string1[i] != '\0')) {
		i++;
	}

	return (string1[i]-string2[i]);
}