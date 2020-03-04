#include <stdio.h>

struct SAMPLE {
	int a;
	long b;
	double c;
};

int main(void)
{
	struct SAMPLE s;

	s.a = 10;
	s.b = 20;
	s.c = 12.4;

	printf("%d, %ld, %f\n", s.a, s.b, s.c);

	return 0;
}
