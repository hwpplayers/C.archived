#include <stdio.h>
#include <math.h>

int main(void)
{
	double a, b, c;
	double delta;

	printf("a:");
	scanf("%lf", &a);

	printf("b:");
	scanf("%lf", &b);

	printf("c:");
	scanf("%lf", &c);

	delta = b * b - 4 * a * c;
	if (delta < 0)
			printf("Kok yok!\n");
	else {
			double x1, x2;

			x1 = (-b + sqrt(delta)) / (2 * a);
			x2 = (-b - sqrt(delta)) / (2 * a);

			printf("x1 = %f, x2 = %f\n", x1, x2);
	}

	return 0;
}
