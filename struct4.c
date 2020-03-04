#include <stdio.h>

struct SAMPLE {
	int a;
	long b;
	double c;
};

int main(void)
{
	struct SAMPLE s = { 10, 20, 30.5 };
	struct SAMPLE k;

	k = s;

	printf("%d, %ld, %f\n", s.a, s.b, s.c);
	printf("%d, %ld, %f\n", k.a, k.b, k.c);

	return 0;
}
