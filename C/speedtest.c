#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void iterative(int x) {
  int i, j;
  for (j = 0; j <= x; j++) {
    int *stuff = malloc(j * sizeof(int));
    for (i = 0; i < j; i++) {
      stuff[i] = i;
    }
    free(stuff); // explicit free in C
  }
}

int main() {
  clock_t start, end;
  double cpu_time_used;

  start = clock();
  iterative(50000);
  end = clock();

  cpu_time_used = ((double)(end - start)) / CLOCKS_PER_SEC;
  printf("%f\n", cpu_time_used);

  return 0;
}
