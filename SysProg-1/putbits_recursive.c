#include <stdio.h>

void putbits(unsigned val)
{
  if (val == 0)
    return;

  putbits(val >> 1);
  putchar((val & 1) + '0');
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
