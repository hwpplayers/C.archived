#include <stdio.h>

int main(void)
{
  int val;

  for (;;) {
    printf("Sayi giriniz: ");
  scanf("%d", &val);
  if (!val)
    break;
  printf("%d\n", val * val);
  }
  return 0;
}
