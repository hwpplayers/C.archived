#include <stdio.h>

void putnum(int n)
{
  if (n < 0) {
    putchar('-');
    n = -n;
  }
  if (n == 0)
    return;

  putnum(n / 10);

  putchar(n % 10 + '0');
}

int main(void)
{
  int n = -1235678;

  putnum(n);
  putchar('\n');

  return 0;
}
