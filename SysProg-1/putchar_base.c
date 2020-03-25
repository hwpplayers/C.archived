#include <stdio.h>

void putnum(int n, int base)
{
  if (n < 0) {
    putchar('-');
    n = -n;
  }

  if (n / base)
    putnum(n / base, base);
  putchar(n % base >= 10 ? n % base - 10 + 'A' : n % base + '0');

  /* putchar((n % base >= 10 ?  -10 + 'A' : '0') + n % base); */
}

int main(void)
{
  int n = 126;

  putnum(n, 16);
  putchar('\n');

  return 0;
}
