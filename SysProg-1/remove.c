#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	if (remove("test.txt") == -1) {
		fprintf(stderr, "cannot delete file!..\n");
		exit(EXIT_FAILURE);
	}
	printf("Ok\n");

	return 0;
}
