/* double bir dizinin standart sapmasını hesaplayan fonksiyon şöyle yazılabilir: */

#include <stdio.h>
#include <math.h>

double getavg(double *pd, int size)
{
	double total;
	int i;

	total = 0;
	for (i = 0; i < size; ++i)
		total += pd[i];

	return total / size;
}

double get_stddev(double *pd, int size)
{
	double avg, total;
	int i;

	avg = getavg(pd, size);

	total = 0;
	for (i = 0; i < size; ++i)
		total += pow(pd[i] - avg, 2);

	return sqrt(total / (size - 1));
}

int main(void)
{
	double a[5] = { 1, 1, 1, 1, 2 };
	double result;

	result = get_stddev(a, 5);
	printf("%f\n", result);

	return 0;
}
