#include <stdio.h>
#include <string.h>

int main(void)
{
  char s[] = "ankara";

  strset(s, 'x');
  puts(s);

  return 0;
}
