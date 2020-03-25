#include <stdio.h>

void putsrev(const char *str)
{
  if (*str == '\0')
    return;

  putsrev(str + 1);
  putchar(*str);
}

int main(void)
{
  putsrev("ankara");
  putchar('\n');

  return 0;
}
