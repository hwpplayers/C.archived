#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	double head, tail, headRatio, tailRatio;
	unsigned long i;
	unsigned long n;

	srand(time(0));
	head = tail = 0;
	n = 1000000000;
	for (i = 0; i < n; ++i) 
		if (rand() % 2 == 0)
			++head;
		else
			++tail;
	
	headRatio = head / n;
	tailRatio = tail / n;

	printf("Head Ratio = %f, Tail Ratio = %f\n", headRatio, tailRatio);

	return 0;
}
