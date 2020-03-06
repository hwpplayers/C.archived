#include <stdio.h>

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; argv[i] != NULL; ++i)
		printf("%s\n", argv[i]);

	return 0;
}
