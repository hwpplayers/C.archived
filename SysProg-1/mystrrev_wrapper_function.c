#include <stdio.h>

void mystrrev_recur(char *str, size_t left, size_t right)
{
  char temp;

  if (left >= right)
    return;

  temp = str[left];
  str[left] = str[right];
  str[right] = temp;

  mystrrev_recur(str, left + 1, right - 1);
}

char *mystrrev(char *str)
{
  size_t i;

  for (i = 0; str[i] != '\0'; ++i)
    ;

  mystrrev_recur(str, 0, i - 1);/* mustrrev_recur(str, 0, strlen(str) - 1); */

  return str;
}

int main(void)
{
  char s[] = "ankara";

  mystrrev(s);
  puts(s);

  return 0;
}
