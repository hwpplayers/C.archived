#include <stdio.h>

void mystrrev(char *str)
{
  size_t n, i;
  char temp;

  for (n = 0; str[n] != '\0'; ++n)
    ;
  for (i = 0; i < n / 2; ++i) {
    temp = str[i];
    str[i] = str[n - i - 1];
    str[n - i - 1] = temp;
  }
}

int main(void)
{
  char s[] = "ankara";

  mystrrev(s);
  puts(s);

  return 0;
}
