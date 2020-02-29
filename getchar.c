/*Fakat karakter okumak için getchar isimli standart bir C fonksiyonu da vardır:

int getchar(void);	

Fonksiyon bir tuşa basılıp ENTER tuşuna basılana kadar bekler. Basılan tuşun karakter tablosundaki sıra numarasına geri döner. Geri dönüş değeri aslında bir byte’lık karakterin kod numarasıdır. Tipik olarak char türden bir nesneye atanabilir. Örneğin:*/

#include <stdio.h>

int main(void)
{
	char ch;

	ch = getchar();
	printf("girilen karakter: %c\n", ch);

	return 0;
}
