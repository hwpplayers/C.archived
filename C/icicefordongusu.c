#include <stdio.h>

int main(void)
{
  int i, k;

  for (i = 0; i < 3; ++i)
    for (k = 0; k < 3; ++k)
      printf("(%d, %d)\n", i, k);

  return 0;
}
