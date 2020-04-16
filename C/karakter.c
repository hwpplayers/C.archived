/*İki tırnak içerisinde oktal ve hex sistemde karakterleri yazarken dikkat etmek gerekir. Çünkü derleyici anlamlı en uzun karakter kümesinden ters bölü karakterlerini oluşturur. Yani örneğin “6Ankara\x91Adana” stringinde ters bölü karakteri '\x9' biçiminde değil '\x91A' biçiminde ele alınır. Fakat “6Ankara\x9\x31\x41\x64\x61na\n" istediğimizi yapabilir. 

  9) C'de short, unsigned short, char, signed char ve unsigned char türünden karakter sabitleri yoktur. Örneğin:*/

#include <stdio.h>

int main()
{
	printf("6Ankara\x9\x31\x41\x64\x61na\n");
		
	return 0;
}
