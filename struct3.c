#include <stdio.h>

struct SAMPLE {
	int a;
	long b;
	double c;
};

int main(void)
{
	struct SAMPLE s = { 10, 20, 20.5 };

	printf("%d, %ld, %f\n", s.a, s.b, s.c);

	return 0;
}
