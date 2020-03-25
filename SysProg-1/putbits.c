#include <stdio.h>

void putbits(unsigned n)
{
  int i;

  for (i = sizeof(n) * 8 - 1; i >= 0; --i)
    putchar(((n >> i) & 1) + '0');

  putchar('\n');
}

int main(void)
{
  unsigned val;

  printf("Bir sayi giriniz:");
  scanf("%u", &val);

  putbits(val);
  putchar('\n');

  return 0;
}
