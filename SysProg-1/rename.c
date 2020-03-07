#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	if (rename("test.txt", "x.txt") == -1) {
		fprintf(stderr, "cannot rename file!..\n");
		exit(EXIT_FAILURE);
	}
	printf("Ok\n");

	return 0;
}
