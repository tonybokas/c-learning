// Bubble Sorting

#include <stdio.h>
#include <stdlib.h>

void swap(int [], int, int);
void print_out(int []);

int main(void) {
	int a[] = {2, 6, 8, 4, 7, 9, 3, 1, 5, 0};

	puts("Initial order:");
	print_out(a);
	puts("");

	puts("Begin sort:");
	for(int i = 0; i < 10; i++) {
		print_out(a);
		for(int n = 0; n < 10-1; n++) {
			if(a[n + 1] > a[n]) swap(a, n, n + 1);
		}
	}

	puts("\nFinal order:");
	print_out(a);

	return EXIT_SUCCESS;
} // End main

void swap(int a[], int i, int n) {
	int temp = 0;
	temp = a[i];
	a[i] = a[n];
	a[n] = temp;
}

void print_out(int a[]) {
	for(int i = 0; i < 10; i++) printf(" %d ", a[i]);
	puts("");
}