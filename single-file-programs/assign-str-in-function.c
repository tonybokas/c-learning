#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

void assign(char *);

int main(void) {
	char arr[1][10];
	memset(arr[0], 0, 9);
	printf("Array at [0]: %s\n", arr[0]);
	assign(arr[0]);
	printf("Array at [0]: %s\n", arr[0]);
	printf("Array at [0][4]: %c\n", arr[0][4]);
	// printf("Array at 0 after assignment: %s\n", arr[0]);

	const char *login[] = {arr[0]};
	printf("Login name: %s\n", login[0]);
	return 0;
}

void assign(char *str) {
	strcpy(str, "Kitchen");
}