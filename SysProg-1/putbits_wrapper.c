#include <stdio.h>

void putbits_recur(unsigned val, unsigned n)
{
  if (n == 0)
    return;

  putbits_recur(val >> 1, n - 1);
  putchar((val & 1) + '0');
}

void putbits(unsigned val)
{
  putbits_recur(val, sizeof(val) * 8 - 1);
  putchar('\n');
}

int main(void)
{
  unsigned val;

  printf("Bir sayi giriniz:");
  scanf("%u", &val);

  putbits(val);

  return 0;
}
