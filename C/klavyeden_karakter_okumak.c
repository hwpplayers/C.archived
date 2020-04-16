/*Klavyeden Karakter Okumak

  Klavyeden scanf fonksiyonuyla %c formatıyla karakter okuyabiliriz. Örneğin:*/

#include <stdio.h>

int main(void)
{
	char ch;

	printf("bir karakter giriniz:");
	scanf("%c", &ch);

	printf("girilen karakter: %c\n", ch);

	return 0;
}
