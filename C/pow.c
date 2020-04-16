/*pow fonksiyonu üs almak için kullanılır. Parametrik yapısı şöyledir:

double pow(double base, double e);

Bu fonksiyon birinci parametresiyle belirtilen değerin ikinci parametresiyle belirtilen kuvvetini alır ve onu geri dönüş değeri olarak verir. Örneğin:*/

#include <stdio.h>
#include <math.h>

int main()
{
	double result;
	
	result = pow(3, 4);
	printf("%f\n", result);

	return 0;
}
