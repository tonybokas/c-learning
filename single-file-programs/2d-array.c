// Two-Dimensional Array | (C) 2023 Antonios J. Bokas

#include <stdlib.h>
#include <stdio.h>

int main(void) {
  puts("Two-Dimensional Array");
  int multi[11][10] = {{0}};
  for (int i = 0; i < 11; i++) {
    puts("");
    for (int n = 0; n < 10; n++) {
      if (i == 0 && n == 0) {
        multi[i][n] = 1;
      }
      else if (i != 0 && n == 0) {
        multi[i][n] = multi[i - 1][9];
      }
      else {
        multi[i][n] = multi[i][n - 1] + 1;
      }
      printf("%3d ", multi[i][n]);
    }
  }
  puts("");
  return EXIT_SUCCESS;
}