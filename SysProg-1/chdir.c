#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void exit_sys(const char *msg);

int main(void)
{
  char cwd[1024];

  if (chdir("/usr/include") == -1)
    exit_sys("chidr");

  if (getcwd(cwd, 1024) == NULL)
    exit_sys("getcwd");

  puts(cwd);

  return 0;
}

void exit_sys(const char *msg)
{
  perror(msg);
  exit(EXIT_FAILURE);
}
