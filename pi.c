#include <stdio.h>

int main(void)
{
  int a = 100;
  int *pi;

  pi = &a;
  printf("%d\n", *pi); /* 100 */
  *pi = 150;
  printf("%d\n", a);  /* 150 */

  return 0;
}
