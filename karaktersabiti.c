/*Karakter sabitleri tek tırnak içerisinde önce bir ters bölü sonra oktal digit'ler belirtilerek de yazılabilir. Örneğin '\7' karakteri '\a' karakteri ile ASCII tablosunda aynı değer sahiptir.  Örneğin:*/

#include <stdio.h>

int main()
{
	char ch = '\11';

	printf("Ankara%cIzmir\n", ch);	
		
	return 0;
}
