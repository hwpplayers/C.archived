/*log fonksiyonu e tabanına göre log10 fonksiyonu 10 tabanına göre logaritma alır:

double log(double val);
double log10(double val);

Örneğin: */

#include <stdio.h>
#include <math.h>

int main()
{
	double result;
	
	result = log10(1000);
	printf("%f\n", result);

	return 0;
}
