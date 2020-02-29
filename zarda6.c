#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	double six, sixRatio;
	unsigned long i;
	unsigned long n;

	srand(time(0));
	six = 0;
	n = 1000000000;
	for (i = 0; i < n; ++i) 
		if (rand() % 6 + 1 == 6)
			++six;
	
	sixRatio = six / n;

	printf("Head Ratio = %f\n", sixRatio);

	return 0;
}
