#include <stdio.h>

int main()
{
  long a = 12345678;   /* 0xBC614E  */
  unsigned short b;

  b = a;
  printf("%u\n", b);   /* 24910 = 0x614E */

  return 0;
}
