/*1’den 100’e kadar sayıların toplamı şöyle bulunabilir:*/

#include <stdio.h>

int main(void)
{
	int i, total;

	total = 0;
	for (i = 1; i <= 100; ++i)
		total += i;

	printf("%d\n", total);

	return 0;
}
