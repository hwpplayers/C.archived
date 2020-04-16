/*Parametreli bir fonksiyon çağrıldığında önce argümanların değerleri hesaplanır. Sonra argümanlardan parametre değişkenlerine karşılıklı bir atama yapılır. Sonra programın akışı fonkisyona geçer. Örneğin:*/

#include <stdio.h>

void foo(int a, int b)
{
	printf("a = %d, b = %d\n", a, b);
}

int main()
{
	int x = 10, y = 20;

	foo(x, y);
	foo(x + 10, y + 20);
	foo(100, 200);
	
	return 0;
}
