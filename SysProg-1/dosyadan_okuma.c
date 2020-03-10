#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

#define BUF_SIZE     10

void exit_sys(const char *msg);

int main(void)
{
	int fd;
	char buf[BUF_SIZE + 1];
	ssize_t n;

	if ((fd = open("test.txt", O_RDONLY)) == -1)
		exit_sys("open");

	while ((n = read(fd, buf, BUF_SIZE)) > 0) {
		buf[n] = '\0';
		printf("%s", buf);
	}

	if (n == -1)
		exit_sys("read");

	close(fd);

	return 0;
}

void exit_sys(const char *msg)
{
	perror(msg);
	exit(EXIT_FAILURE);
}
