#include <stdio.h>

struct COMPLEX {
	double real, imag;
};

void get_comp(struct COMPLEX *comp)
{
	printf("Gercek Kisim:");
	scanf("%lf", &comp->real);

	printf("Sanal Kisim:");
	scanf("%lf", &comp->imag);
}

void disp_comp(struct COMPLEX *comp)
{
	printf("%.0f+%.0fi\n", comp->real, comp->imag);
}

int main(void)
{
	struct COMPLEX z;

	get_comp(&z);
	disp_comp(&z);

	return 0;
}
