#include <stdio.h>
#include <unistd.h>

int main(int argc, char **argv)
{
	int ch;
	char *carg;
	int aflag = 0, bflag = 0, cflag = 0;

	while ((ch = getopt(argc, argv, "abc:")) != -1) {
		switch (ch) {
		case 'a':
			aflag = 1;
			break;
		case 'b':
			bflag = 1;
			break;
		case 'c':
			carg = optarg;
			cflag = 1;
			break;
		}
	}

	if (aflag)
		printf("-a switch is given\n");

	if (bflag)
		printf("-b switch is given\n");

	if (cflag)
		printf("-c switch is given and its arument is: %s\n", carg);

	return 0;
}
