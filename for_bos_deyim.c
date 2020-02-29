/*for döngülerinin de yanlışlıkla boş deyim ile kapatılması durumuyla karşılaşılmaktadır. Örneğin:*/

#include <stdio.h>

int main(void)
{
	int i;

	for (i = 0; i < 10; ++i);		/* Dikkat boş deyim */
		printf("%d\n", i);

	return 0;
} 
