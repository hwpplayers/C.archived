/*for döngüsünün üç kısmında da virgül operatörü zenginlik katmak için kullanılabilir. Örneğin:*/

#include <stdio.h>

int main(void)
{
	int i, total;

	for (i = 1, total = 0; i <= 100; total += i, ++i)
		;
	printf("%d\n", total);

	return 0;
} 

/*Burada döngünün birinci kısmını i = 1, total = 0 ifadesi oluşturmaktadır. Üçüncü kısmını ise total += i, ++i ifadesi oluşturmaktadır. */
