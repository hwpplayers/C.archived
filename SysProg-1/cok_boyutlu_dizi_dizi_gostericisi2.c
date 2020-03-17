#include <stdio.h>

int main(void)
{
  int a[4][3] = {
    { 1, 2, 3 }, { 4, 5, 6 }, { 7, 8, 9 }, {10, 11, 12}
  };
  int (*pa)[3];
  int val;
  int *pi;

  pa = a;

  val = **pa;
  printf("%d\n", val);/* 1 */

  val = (*pa)[1];
  printf("%d\n", val);/* 2 */

  val = pa[1][1];/* eşdeğeri (*(pa + 1))[1] */
  printf("%d\n", val);/* 5 */

  pi = pa[1];
  val = pi[2];
  printf("%d\n", val);/* 6 */

  pa += 2;
  val = (*pa)[1];
  printf("%d\n", val);/* 8 */

  return 0;
}
