#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i, val;

	for (i = 0; i < 20; ++i) {
		val = rand() % 10;
		printf("%d ", val);
	}
	printf("\n");

	return 0;
}
