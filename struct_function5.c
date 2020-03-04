#include <stdio.h>

struct COMPLEX {
	double real, imag;
};

void disp_comp(struct COMPLEX *comp)
{
	printf("%.0f+%.0fi\n", comp->real, comp->imag);
}

struct COMPLEX add_comp(struct COMPLEX *z1, struct COMPLEX *z2)
{
	struct COMPLEX result;

	result.real = z1->real + z2->real;
	result.imag = z1->imag + z2->imag;

	return result;
}

int main(void)
{
	struct COMPLEX z1 = { 3, 2 };
	struct COMPLEX z2 = { 1, 4 };
	struct COMPLEX result;

	result = add_comp(&z1, &z2);
	disp_comp(&result);
	
	return 0;
}
