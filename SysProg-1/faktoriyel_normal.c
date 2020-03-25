#include <stdio.h>

unsigned long factorial(unsigned n)
{
  unsigned long f = 1;

  for (; n > 1; --n)
    f *= n;

  return f;
}

int main(void)
{
  long result;

  result = factorial(10);
  printf("%lu\n", result);

  return 0;
}
