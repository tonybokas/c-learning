#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int repl_str(char *);

int main(void) {
	int len = strlen("Monroe"); // we get "Monroe" from user input
	char str[++len]; // make array length of string plus terminator
	strcpy(str, "Monroe");
	
	printf("String value: %s\n", str);
	puts("Let's examine the string...");
	printf("Character 3 of the string: %c\n\n", str[2]);

	repl_str(str);

	printf("String value: %s\n", str);
	puts("Let's examine the string...");
	printf("Character 3 of the string: %c\n\n", str[2]);
	
	puts("Finished");
	return 0;
} // end main

int repl_str(char * str_in) {
	strcpy(str_in, "Anamosa Ave"); // we get "Anamosa Ave" from user input
	puts("(String changed by reference in function)\n");
	return 0;
} // end repl_str