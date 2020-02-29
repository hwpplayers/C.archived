/*if deyimi şöyle çalışır: Önce if parantezi içerisindeki ifadenin sayısal değeri hesaplanır. Bu değer sıfır dışı ise if deyiminin doğruysa kısmı, sıfır ise yanlışsa kısmı çalıştırlır. Örneğin:*/

#include <stdio.h>

int main(void)
{
	int a;

	printf("Bir sayi giriniz:");
	scanf("%d", &a);

	if (a > 0)
			printf("pozitif\n");
	else
	 	printf("negatif ya da sifir\n");

	printf("son\n");

	return 0;
}
