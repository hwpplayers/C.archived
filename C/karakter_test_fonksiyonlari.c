/*Karakter test fonksiyonlarını biz de yazabiliriz. Örneğin isupper şöyle yazılabilir:*/

#include <stdio.h>

int myisupper(char ch)
{
	if (ch >= 'A' && ch <= 'Z')
		return 1;
	
	return 0;
}

int myislower(char ch)
{
	if (ch >= 'a' && ch <= 'z')
		return 1;

	return 0;
}

int myisalpha(char ch)
{
	if (myisupper(ch) || myislower(ch))
		return 1;

	return 0;
}

int main(void)
{
	char ch;

	printf("Karakter: ");
	ch = getchar();
	if (myisalpha(ch))
		printf("alfabetik\n");
	else
		printf("alfabetik degil\n");

	return 0;
}

/*Karakter test fonksiyonları ancak karakter 0-127 arasındaysa doğru çalışmaktadır. Bu fonksiyonlar ASCII karkterlerinin ilk 7 bitini dikkate almaktadır.*/
