/*Bu operatörlerin önek ve sonek kullanımları arasında farklılık vardır. Her iki kullanımda da artırma ya da eksiltme tablodaki öncelikle yapılır. Önek kullanımda sonraki işleme nesnenin artırılmış ya da eksiltilmiş değeri sokulurken, sonek kullanımda artırılmamış ya da eksiltilmemiş değeri sokulur. Örneğin:*/

#include <stdio.h>

int main()
{
	int a, b;

	a = 3;
	b = ++a * 2;
	printf("a = %d, b = %d\n", a, b);	/* a = 4, b = 8 */
	
	a = 3;
	b = a++ * 2;
	printf("a = %d, b = %d\n", a, b);	/* a = 4, b = 6 */
	
	return 0;
}
