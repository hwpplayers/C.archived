#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

#define BUF_SIZE     8192

void exit_sys(const char *msg);

int main(int argc, char *argv[])
{
	int fds, fdd;
	char buf[BUF_SIZE];
	int oflag = 0;
	int result;
	ssize_t n;

	opterr = 0;
	while ((result = getopt(argc, argv, "o")) != -1) {
		switch (result) {
		case 'o':
			oflag = 1;
			break;
		case '?':
			fprintf(stderr, "invalid switch: %c\n", optopt);
			break;
		}
	}

	if (argc - optind != 2) {
		fprintf(stderr, "wrong number of arguments!..\n");
		fprintf(stderr, "usage: mycp [-o] <source file path> <dest file path>\n");
		exit(EXIT_FAILURE);
	}

	if ((fds = open(argv[optind], O_RDONLY)) == -1)
		exit_sys("open");

	if (access(argv[optind + 1], F_OK) == 0 && !oflag) {
		fprintf(stderr, "file already exists, cannot overwrite, please use -o switch to overwrite!..\n");
		exit(EXIT_FAILURE);
	}

	if ((fdd = open(argv[optind + 1], oflag ? O_WRONLY | O_CREAT : O_WRONLY | O_CREAT | O_TRUNC,
		S_IRUSR | S_IWUSR | S_IRGRP | S_IROTH)) == -1)
		exit_sys("open");

	while ((n = read(fds, buf, BUF_SIZE)) > 0)
		if (write(fdd, buf, n) != n)
			exit_sys("write");

	if (n == -1)
		exit_sys("read");

	printf("1 file copied...\n");

	close(fds);
	close(fdd);

	return 0;
}

void exit_sys(const char *msg)
{
	perror(msg);
	exit(EXIT_FAILURE);
}
