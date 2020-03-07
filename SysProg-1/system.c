#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	if (system("ren x.txt a.txt & copy a.txt b.txt") != 0) {
		fprintf(stderr, "system failed!..\n");
		exit(EXIT_FAILURE);
	}

	printf("Ok\n");

	return 0;
}
