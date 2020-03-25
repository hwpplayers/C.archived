#include <stdio.h>

void putnum(int n)
{
  char s[16];
  int i, sign;

  if (n < 0) {
    sign = -1;
    n = -n;
  }
  else
    sign = 1;

  for (i = 0; n; ++i) {
    s[i] = n % 10 + '0';
    n /= 10;
  }

  if (sign < 0)
    s[i++] = '-';
  s[i] = '\0';

  for (--i; i >= 0; --i)
    putchar(s[i]);
  putchar('\n');
}

int main(void)
{
  int n = -1235678;

  putnum(n);

  return 0;
}
