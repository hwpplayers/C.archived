#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(void)
{
  char cwd[1024];

  if (getcwd(cwd, 1024) == NULL) {
    perror("getcwd");
    exit(EXIT_FAILURE);
  }
  puts(cwd);

  return 0;
}
