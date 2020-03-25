#include <stdio.h>

unsigned long factorial(unsigned n)
{
  unsigned long result;

  if (n == 0)
    return 1;

  result = n * factorial(n - 1);

  return result;
}

int main(void)
{
  long result;

  result = factorial(4);
  printf("%lu\n", result);

  return 0;
}
