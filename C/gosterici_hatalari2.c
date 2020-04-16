#include <stdio.h>

int main(void)
{
	char *s;

	gets(s);		/* Gösterici hatası! gets klavyeden girilen karakterleri nereye yerleştiriyor? */

	return 0;
}
