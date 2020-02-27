/*Karşılaştırma Operatörleri

C'de 6 karşılaştırma operatörü vardır:

<, >, <=, >=
==, !=

Bu operatörlerin hepsi iki operandlı araek (binary infix) operatörlerdir. Öncelik tablosunda karşılaştırma operatörleri aritmetik operatörlerden daha düşük önceliklidir:

( )          Soldan-Sağa
+  -  ++  -- Sağdan-Sola
*  / %       Soldan-Sağa
+  -         Soldan-Sağa
<  >  <=  >= Soldan-Sağa
 == !=       Soldan-Sağa
 =           Sağdan-Sola

 Bu operatörler önerme doğruysa 1 değerini, yanlışsa 0 değerini üretirler. Bu operatörlerin ürettiği bu değerler int türdendir ve istenirse başka işlemlere sokulabilirler. Örneğin: */

#include <stdio.h>

int main()
{
	int a = 3, b;

	b = (a > 2) + 1;
	printf("%d\n", b);		/* 2 */

	return 0;
}
