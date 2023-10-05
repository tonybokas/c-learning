#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void test_mempcpy (void);

int main(void) {
	char *h = "Wyoming";
	char *i;
	memcpy(i, h, strlen(h));
	printf("i is now %s\n\n", i);

	test_mempcpy ();
	return EXIT_SUCCESS;
}

void test_mempcpy () {
	char *h = "Wyoming";
	char *i = "Montana";
	char j[100];
	mempcpy (mempcpy (j, h, strlen (h)), i, strlen (i));
	printf("h is %s\n", h);
	printf("i is %s\n", i);
	printf("j is %s\n", j);
}