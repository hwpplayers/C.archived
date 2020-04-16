#include <stdio.h>

struct SAMPLE {
	int a;
	long b;
	double c;
};

int main(void)
{
	struct SAMPLE s;
	struct SAMPLE *ps;

	ps = &s;

	ps->a = 10;
	ps->b = 20;
	ps->c = 30;

	printf("%d, %ld, %f\n", ps->a, ps->b, ps->c);
	
	return 0;
}
