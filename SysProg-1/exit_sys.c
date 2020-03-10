#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
#include <fcntl.h>

void exit_sys(const char *msg);

int main(void)
{
	int fd;

	if ((fd = open("xxxxxx.yyy", O_RDONLY)) == -1)
		exit_sys("open");

	printf("Ok\n");

	return 0;
}

void exit_sys(const char *msg)
{
	perror(msg);
	exit(EXIT_FAILURE);
}
