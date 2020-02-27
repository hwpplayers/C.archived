/*Karşılaştırma operatörleri kendi aralarında iki öncelik grubunda bulunmaktadır. Örneğin:

result = a == b > c;

İ1: b > c
İ2: a == İ1
İ3: result = İ2

Örneğin:*/

#include <stdio.h>

int main()
{
	int a = 3, b;

	b = a++ == 3;
	printf("a = %d, b = %d\n", a, b); 

	return 0;
}
