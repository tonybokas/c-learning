#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <time.h>

void assign_time (char h[], size_t i) {

	time_t j;
	time (&j);
	snprintf (h, i, "%lld", j);
	h[strlen (h) + 1] = '\0';
}

int main (void) {

	char h[25];
	assign_time (h, 24);
	printf ("Time string: %s\n", h);
	printf ("Time string length: %d\n", strlen (h));
	printf ("String + 1: %c\n", h[strlen (h) + 1]);

	time_t compare = time (NULL);
	printf ("Time via NULL: %lld\n", compare);

	char details[1][50];
    char *tail;
	time_t created_t = strtol ("1686804402", &tail, 0);

	struct tm *created_s = localtime (&created_t);
	strftime (details[0], 50, "%b %Y", created_s);

	printf ("Time: %s\n", details[0]);

	/* time_t h;
	time (&h);
	printf ("Time: %lld\n", h);
	printf ("Size: %llu\n", sizeof(h));

	time_t time_i;
	time (&time_i);
	char time_s[25];
	snprintf (time_s, 24, "%lld", time_i);

	printf ("Time string length: %lld", strlen (time_s)); */

	return 0;
}

	