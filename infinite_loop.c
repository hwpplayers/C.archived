/*for döngüsünün ikinci kısmı da boş bırakılabilir. Bu durumda döngü koşulunun her zaman sağlandığı kabul edilir. Yani döngünün ikinci kısmına birşey yazmamakla buraya sıfır dışı bir değer yazmak aynı anlamdadır. Örneğin:*/

#include <stdio.h>

int main(void)
{
	int i;

	for (i = 0;; ++i)		/* sonsuz döngü (infinite loop) */
		printf("%d\n", i);

	return 0;
} 
