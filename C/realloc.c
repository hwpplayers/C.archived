#include <stdio.h>
#include <stdlib.h>

#define BLOCK_ELEM_SIZE			5

int main(void)
{
	int *pi = NULL;
	int val, count, i;

	count = 0;
	for (;;) {
		printf("Sayi giriniz:");
		scanf("%d", &val);

		if (val == 0)
			break;

		if (count % BLOCK_ELEM_SIZE == 0) {
			pi = (int *)realloc(pi, (count + BLOCK_ELEM_SIZE) * sizeof(int) );
			if (pi == NULL) {
				printf("cannot allocate memory!..\n");
				exit(EXIT_FAILURE);
			}
		}
		pi[count++] = val;
	}

	for (i = 0; i < count; ++i)
		printf("%d ", pi[i]);
	printf("\n");

	return 0;
}
