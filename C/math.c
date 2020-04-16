/*Bazı Matematiksel Standart C Fonksiyonları

C'de temel bazı matemetik işlemleri yapan çeşitli standart C fonksiyonları vardır. Bu fonksiyonları kullanırken <math.h> dosyası include edilmelidir. 

- sqrt fonksiyonu double bir parametreye sahiptir, parametresi ile aldığı değerin karekökünü geri dönüş değeri olarak verir. 

double sqrt(double val); Örneğin: */

#include <stdio.h>
#include <math.h>

int main()
{
	double val;
	double result;
	
	printf("Lutfen bir sayi giriniz:");
	scanf("%lf", &val);

	result = sqrt(val);
	printf("%f\n", result);

	return 0;
}
