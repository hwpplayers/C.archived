#include <stdio.h>

void foo(int n)
{
  printf("Giris:%d\n", n);

  if (n == 0)
    return;

  foo(n - 1);

  printf("Cikis:%d\n", n);
}

int main(void)
{
  foo(3);

  return 0;
}
