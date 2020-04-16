/*İki tırnak karakterine ilişkin karakter sabiti ' \ ” ' ile belirtilir. Fakat tek tırnak içerisinde iki tırnak soruna yol açmaz. Ancak iki tırnak içerisinde iki tırnak soruna yol açar. Örneğin:*/

#include <stdio.h>

int main()
{
	char ch1 = '\"';		/* geçerli */
	char ch2 = '"';		/* geçerli */
	
	printf("%c, %c\n", ch1, ch2);
	printf("\"Ankara\"\n");	/* geçerli */
	
	return 0;
}
