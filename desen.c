#include <stdio.h>

int main(void)
{
  int i, k, n;

  printf("Bir sayi giriniz:");
  scanf("%d", &n);

  for (i = 1; i <= n; ++i) {
    for (k = 1; k <= i; ++k)
      putchar('*');
    putchar('\n');
  }

  return 0;
}
