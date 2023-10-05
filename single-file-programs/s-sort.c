// Selection Sorting

#include <stdio.h>
#include <stdlib.h>

void swap(int [], int, int);
void print_out(int []);

int main(void) {
	int list[] = {4, 1, 9, 5, 7, 3, 8, 0, 6, 2}, sm;

	puts("Initial order:");
	print_out(list);
	puts("");

	puts("Begin sort:");
	for(int a = 0; a < 10; a++) {
		sm = a;
		print_out(list);
		for(int b = a + 1; b < 10; b++) {
			if(list[b] < list[sm]) sm = b;
			//  printf("smallest element: %d\n", sm);
		}
		swap(list, a, sm);
	}

	puts("\nFinal order:");
	print_out(list);

	return EXIT_SUCCESS;
} // End main

void swap(int list[], int a, int b) {
	int temp = 0;
	temp = list[a];
	list[a] = list[b];
	list[b] = temp;
}

void print_out(int list[]) {
	for(int a = 0; a < 10; a++) printf(" %d ", list[a]);
	puts("");
}