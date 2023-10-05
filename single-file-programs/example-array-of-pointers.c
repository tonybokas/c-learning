#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

void compare(char *[10]);

int main(void) {
	char *arr[10];
	arr[9] = "hoses";
	printf("Array at 9: %s\n", arr[9]);
	compare(arr);
	compare(arr);
	printf("Array at 9: %s\n", arr[9]);
	return 0;
}

void compare(char *str[10]) {
	if(strncmp(str[9], "automobile", 5) == 0) {
		puts("Success");
	}
	else {
		puts("Failure");
		str[9] = "automobile";
		puts("Fixed string");
	}
}