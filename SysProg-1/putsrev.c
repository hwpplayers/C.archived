#include <stdio.h>

void putsrev(const char *str)
{
  int i;

  for (i = 0; str[i] != '\0'; ++i)
    ;
  for (--i; i >= 0; --i)
    putchar(str[i]);
}

int main(void)
{
  putsrev("ankara");
  putchar('\n');

  return 0;
}
