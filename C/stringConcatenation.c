#include <stdio.h>

int main() {
	int i=0, j=0;
	char string1[200], string2[100];

	printf("Please enter first string:\n");
	scanf("%s",string1);
	printf("Please enter second string:\n");
	scanf("%s",string2);

	while(string1[i] != '\0') {
		i++;
	}
	while(string2[j] != '\0') {
		string1[i]=string2[j];
		i++;
		j++;
	}
	string1[i]='\0';

	return 0;
}