#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int i, val;

	srand(time(0));
	for (i = 0; i < 10; ++i) {
		val = rand() % 10;
		printf("%d ", val);
	}
	printf("\n");

	return 0;
}
