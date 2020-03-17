#include <stdio.h>

void foo(int *pi, int rowSize, int colSize)
{
  int i, k;

  for (i = 0; i < rowSize; ++i) {
    for (k = 0; k < colSize; ++k)
      printf("%d ", pi[i * colSize + k]);
    printf("\n");
  }
}

int main(void)
{
  int a[3][2] = { {1, 2}, {3, 4}, {5, 6} };

  foo((int *)a, 3, 2);/* geçerli */

  return 0;
}
