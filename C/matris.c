#include <stdio.h>

int main(void)
{
  int a[4][3] = { { 1, 2, 3 }, { 4, 5, 6 }, { 7, 8, 9 }, { 10, 11, 12 } };
  int i, k;

  for (i = 0; i < 4; ++i) {
    for (k = 0; k < 3; ++k)
      printf("%d ", a[i][k]);
    printf("\n");
  }

  return 0;
}
