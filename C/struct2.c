#include <stdio.h>

struct SAMPLE {
	int a;
	long b;
	double c;
};

int main(void)
{
	struct SAMPLE s;

	printf("%p, %p, %p\n", &s.a, &s.b, &s.c);

	return 0;
}
