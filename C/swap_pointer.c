/*
İki yerel nesnenin içerisindeki değerleri değiştiren swap isimli bir fonksiyon yazmak isteyelim. Acaba bu fonksiyonu aşağıdaki gibi yazabilir miyiz?

#include <stdio.h>

void swap(int a, int b)
{
	int temp = a;
	a = b;
	b = temp;
}

int main(void)
{
	int x = 10, y = 20;

	swap(x, y);
	printf("x = %d, y = %d\n", x, y);

	return 0;
}

Yanıt hayır! Çünkü burada swap x ve y'nin içindekilerini değiştirmiyor, parametre değişkeni olan a ve b'nin içindekileri değiştiriyor. Bunun sağlanabilmesi için yerel nesnelerin adreslerinin swap fonksiyonuna aktarılması gerekir. Bu durumda swap fonksiyonunun paremetre değişkenleri birer gösterici olmalıdır: */

#include <stdio.h>

void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

int main(void)
{
	int x = 10, y = 20;

	swap(&x, &y);
	printf("x = %d, y = %d\n", x, y);

	return 0;
}
