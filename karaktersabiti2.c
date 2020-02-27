/*Karaktre sabitleri tek tırnak içerisinde önce bir ters bölü sonra küçük harf bir x sonra da hex digit'ler belirtilerek de yazılabilir. Örneğin '\x1B' gibi. Örneğin:*/

#include <stdio.h>

int main()
{
	printf("Ankara\x9Izmir\n");	
		
	return 0;
}
