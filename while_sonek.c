/*while parantezinde sonek bir ++ ya da -- varsa önce artırım ya da eksiltim uygulanır fakat sonraki operatöre  nesnenin artırılmamış ya da eksiltilmemiş değeri sokulur. Örneğin:*/

#include <stdio.h>

int main(void)
{
	int i = 0;

	while (i++ < 10)
		printf("%d ", i);	/* 1'den 10'a kadar */
	putchar('\n');

	return 0;
}
