#include <stdio.h>

int main(void)
{
	unsigned n, count;

	printf("Sayi giriniz:");
	scanf("%d", &n);

	count = 0;
	do {
		if (n & 1)
			++count;
		n >>= 1;
	} while (n);

	printf("%d\n", count);

	return 0;
}
