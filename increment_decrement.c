/*++ ve -- Operatörleri

  Bu operatörler tek operandlı önek ve sonek kullanılabilen operatörlerdir. Yani ++a ya da a++ biçiminde kullanılabilirler. ++ operatörüne artırma (increment), -- operatörüne eksiltme (decrement) operatörü denilmektedir. ++ operatörü “operand içerisindeki değeri 1 artır”, -- operatörü “operand içerisindeki değeri 1 esksilt” anlamına gelir. Örneğin:*/

#include <stdio.h>

int main()
{
	int a;

	a = 3;
	++a;
	printf("%d\n", a);		/* 4 */

	a = 3;
	--a;
	printf("%d\n", a);		/* 2 */

	return 0;
}
