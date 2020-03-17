#include <stdio.h>

int(*foo(void))[5]
{
  static int a[5] = {1, 2, 3, 4, 5};

  return &a;
}

int main(void)
{
  int(*pai)[5];
  int i;

  pai = foo();
  for (i = 0; i < 5; ++i)
    printf("%d\n", (*pai)[i]);

  return 0;
}
