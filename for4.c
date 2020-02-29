/*https://stackoverflow.com/questions/5005363/undefined-reference-to-sin

Why for sin() in <math.h>, do we need -lm option explicitly; but, not for printf() in <stdio.h>?
*/
#include <stdio.h>
#include <math.h>

int main(void)
{
	double x;

	for (x = 0; x < 6.28; x += 0.1)
		printf("Sin(%.3f)=%.3f\n", x, sin(x));

	return 0;
}
