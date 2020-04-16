#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int *pim;
	int *pic;
	int i;

	if ((pim = (int *)malloc(10 * sizeof(int))) == NULL) {
		printf("cannot allocate memory!\n");
		exit(EXIT_FAILURE);
	}

	if ((pic = (int *)calloc(10, sizeof(int))) == NULL) {
		printf("cannot allocate memory!\n");
		exit(EXIT_FAILURE);
	}

	for (i = 0; i < 10; ++i)
		printf("%d ", pim[i]);
	printf("\n");

	for (i = 0; i < 10; ++i)
		printf("%d ", pic[i]);
	printf("\n");

	return 0;
}
