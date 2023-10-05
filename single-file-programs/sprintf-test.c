#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main(void) {
	time_t h;
	time(&h);
	char time_s[50];
	snprintf(time_s, 49, "%lld", h);
	printf("Time as string: %s\n", time_s);
	printf("Time as integer: %lld\n", h);
	return EXIT_SUCCESS;
}