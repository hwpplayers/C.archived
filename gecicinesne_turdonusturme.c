#include <stdio.h>

int main()
{
	int n;
	int i, val, total;
	double avg;

	printf("Kac sayi gireceksiniz:");
	scanf("%d", &n);

	total = 0;
	for (i = 1; i <= n; ++i) {
		printf("%d. Sayiyi giriniz:", i);
		scanf("%d", &val);
		total += val;
	}
	avg = (double)total / n;		/* dikkat! */
	printf("Ortalama = %f\n", avg);

	return 0;
}
