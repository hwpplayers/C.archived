#include <stdio.h>

#define SIZE		5

int main(void)
{
	int a[SIZE];
	int i, total;
	double avg;

	for (i = 0; i < SIZE; ++i) {
		printf("%d. indeksli elemani giriniz:", i);
		scanf("%d", &a[i]);
	}
	
	total = 0;
	for (i = 0; i < SIZE; ++i)
		total += a[i];

	avg = (double)total / SIZE;
	printf("%f\n", avg);

	return 0;
}
