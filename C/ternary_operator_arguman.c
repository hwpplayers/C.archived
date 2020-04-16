#include <stdio.h>

int main(void)
{
	int val;

	printf("Bir sayi giriniz:");
	scanf("%d", &val);

	printf(val % 2 == 0 ? "Cift\n" : "Tek\n");

	return 0;
}
