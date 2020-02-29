#include <stdio.h>

int main(void)
{
	int val;
	int result;

	printf("Bir sayi giriniz:");
	scanf("%d", &val);

	result = val > 0 ? 100 + 200 : 300 + 400;
	printf("%d\n", result);

	return 0;
}
