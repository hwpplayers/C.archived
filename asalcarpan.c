#include <stdio.h>

int main(void)
{
  int n, i;

  printf("Bir sayi giriniz:");
  scanf("%d", &n);

  i = 2;
  while (n != 1) {
    if (n % i == 0) {
      printf("%d", i);
      n /= i;
    }
    else
      ++i;
  }

  putchar('\n');

  return 0;
  
}
