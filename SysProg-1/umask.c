#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <errno.h>

void exit_sys(const char *msg);

int main(void)
{
	int fd;

	umask(S_IWOTH);

	if ((fd = open("test.txt", O_RDWR|O_CREAT|O_TRUNC, S_IRUSR|S_IWUSR|S_IRGRP|S_IWGRP|S_IROTH| S_IWOTH)) == -1)
		exit_sys("open");

	printf("Ok\n");

	return 0;
}

void exit_sys(const char *msg)
{
	perror(msg);

	exit(EXIT_FAILURE);
}
