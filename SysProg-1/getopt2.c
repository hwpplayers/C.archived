#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(int argc, char *argv[])
{
	int result;
	int a_flag = 0, b_flag = 0, c_flag = 0, d_flag = 0;
	char *c_arg, *d_arg;
	int i;

	opterr = 0;
	while ((result = getopt(argc, argv, "abc:d:")) != -1) {
		switch (result) {
		case 'a':
			a_flag = 1;
			break;
		case 'b':
			b_flag = 1;
			break;
		case 'c':
			c_flag = 1;
			c_arg = optarg;
			break;
		case 'd':
			d_flag = 1;
			d_arg = optarg;
			break;
		case '?':
			if (optopt == 'c' || optopt == 'd')
				fprintf(stderr, "-%c option given without an argument\n", optopt);
			else
				fprintf(stderr, "invalid switch: %c\n", optopt);
			break;
		}
	}

	printf("Arguments without switch:\n");
	for (i = optind; i < argc; ++i)
		puts(argv[i]);

	if (a_flag) {
		printf("-a is given\n");
	}
	if (b_flag) {
		printf("-b is given\n");
	}
	if (c_flag) {
		printf("-c is given, its argument: %s\n", carg);
	}
	if (d_flag) {
		printf("-d is given, its argument: %s\n", darg);
	}
	/* ... */

	return 0;
}
