#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int n, i;
	int *pi;

	printf("Kac elemanli bir int dizi olusturmak istiyorsunuz?");
	scanf("%d", &n);

	pi = (int *)malloc(n * sizeof(int));
	if (pi == NULL) {
		printf("cannot allocate memory!\n");
		exit(EXIT_FAILURE);
	}

	for (i = 0; i < n; ++i) {
		printf("%d. elemani giriniz:", i + 1);
		scanf("%d", &pi[i]);
	}

	for (i = 0; i < n; ++i)
		printf("%d ", pi[i]);
	printf("\n");

	return 0;
}
